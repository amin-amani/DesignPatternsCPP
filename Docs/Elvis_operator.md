### look at below code 
```
return gdev ?: ERR_PTR(-EPROBE_DEFER);
```
This is equivalent to:

```
return (gdev ? gdev : ERR_PTR(-EPROBE_DEFER));
```
* If gdev is non-zero (not NULL) → return gdev.  
* If gdev is zero (NULL or 0) → return ERR_PTR(-EPROBE_DEFER).  

