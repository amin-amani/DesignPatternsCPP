# Robust pthread mutex crash-recovery example

This example demonstrates how to use a robust pthread mutex to safely recover shared data when a thread terminates while holding a mutex.  
## Purpose
The goal of this program is to show:

- How a PTHREAD_MUTEX_ROBUST mutex behaves
- What happens when a thread dies while holding a mutex
- How another thread detects this situation using EOWNERDEAD

## How to properly recover and continue execution
This pattern is useful in fault-tolerant, embedded, or carrier-grade systems where thread failure must not corrupt shared state.
Key Concepts

Robust mutex: Allows detection of a dead mutex owner
EOWNERDEAD: Returned when the previous mutex owner terminated without unlocking
Recovery step: Shared data must be repaired
pthread_mutex_consistent(): Marks the mutex as usable again after recovery

## How the Code Works

A mutex is initialized with the PTHREAD_MUTEX_ROBUST attribute.  
* Two threads are created:  
Thread 1 intentionally exits while holding the mutex (simulated crash).  
Thread 2 attempts to lock the same mutex afterward.  

* When Thread 2 locks the mutex:

pthread_mutex_lock() returns EOWNERDEAD
This indicates the previous owner died while holding the lock

Thread 2:

Repairs the shared data  
Calls pthread_mutex_consistent() to make the mutex usable again  
Continues normal execution safely  
```
#include <stdio.h>

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>

pthread_mutex_t mutex;
int shared_data = 0;

void* worker(void* arg)
{
    int thread_id = *(int*)arg;   // دریافت ورودی عددی
    int ret;

    ret = pthread_mutex_lock(&mutex);
    if (thread_id == 1) {
         printf("[T%d] CRASHING while holding mutex!\n", thread_id);
         pthread_exit(NULL);   // thread dies without unlock
     }
    if (ret == EOWNERDEAD) {
        printf("[T%d] Owner died! Recovering...\n", thread_id);
        shared_data = 0;
        pthread_mutex_consistent(&mutex);
    } else if (ret != 0) {
        perror("pthread_mutex_lock");
        return NULL;
    }

    /* critical section */
    shared_data++;
    printf("[T%d] shared_data = %d\n", thread_id, shared_data);

    pthread_mutex_unlock(&mutex);
    return NULL;
}

int main(void)
{
    pthread_t t1, t2;
    pthread_mutexattr_t attr;

    pthread_mutexattr_init(&attr);
    pthread_mutexattr_setrobust(&attr, PTHREAD_MUTEX_ROBUST);
    pthread_mutex_init(&mutex, &attr);

    int id1 = 1;
    int id2 = 2;

    pthread_create(&t1, NULL, worker, &id1);
    pthread_create(&t2, NULL, worker, &id2);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    pthread_mutex_destroy(&mutex);
    pthread_mutexattr_destroy(&attr);

    return 0;
}
```

