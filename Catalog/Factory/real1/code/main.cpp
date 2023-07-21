#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

class GameAgent
{
public:
    virtual bool gotShot(int shoot)=0;
    virtual ~GameAgent(){}
};

class Tank : public GameAgent
{
    int _pos, _shieldLevel;
public:
    Tank(int x, int shield)
    {
        _pos = x;
        _shieldLevel = shield;
    }
    bool gotShot(int shoot)
    {
        if(_pos==shoot) return true;
        return false;
    }
    ~Tank(){}
};

class Factory
{
public:
    virtual GameAgent* createGameAgents()=0;
};

class GameFactory : public Factory
{
public:
    GameFactory()
    {
        srand(time(0));
    }
    ~GameFactory(){}
    GameAgent* createGameAgents()
    {
        int pos = rand() % 9 + 1;
        cout << "pos: " <<pos << endl;
        Tank* t = new Tank(pos,0);
        return t;
    }
};

class Game
{
    int _level;
    vector<GameAgent*> _agents;
    vector<int> _shoots;
    GameFactory _factory;
public:
    Game()
    {
        _level = 1;
    }
    void start()
    {
        cout << "game started!"<< endl;
        while(_level<=3)
        {
            if(startLevel(_level)==true)
            {
                _level++;
                continue;
            }

            else
            {
                cout << "game over!" << endl;
                return;
            }

        }
        cout << "you win!" << endl;
    }

    bool startLevel(int level)
    {
        cout << "start level " << level << endl;
        getShootPosition();
        createGameAgents(level);
        int score = calcScore();
        cout << "your score: " << score << endl;
        clearLevel();
        if(score>2) return true;
        return false;
    }

    void createGameAgents(int level)
    {

        for(int i=0; i<10-3*level; i++)
        {
            _agents.push_back(_factory.createGameAgents());
        }
    }

    void clearLevel()
    {
        vector<GameAgent*>::iterator it;
        for(it=_agents.begin(); it!=_agents.end(); ++it)
            delete *it;
        _agents.clear();
        _shoots.clear();
    }

    void getShootPosition()
    {
        for(int i=0; i< 6; i++)
        {
            cout << "enter shoot position 1-9: " << endl;
            int input;
            cin >> input;
            _shoots.push_back(input);
        }
    }

    int calcScore()
    {
       int score=0;
       for(size_t i=0; i< _shoots.size(); i++)
       {
           for(size_t t=0; t< _agents.size(); t++)
           {
               if(_agents[t]->gotShot(_shoots[i]))
               {
                   score++;
                   break;
               }
           }
       }
       return score;
    }
};



int main()
{
    Game* game = new Game();
    game->start();
    delete game;
    game = nullptr;
    return 0;
}
