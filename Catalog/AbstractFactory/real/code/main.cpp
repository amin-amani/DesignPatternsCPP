#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

class EnemyAgent
{
public:
    virtual int gotShot(int shoot)=0;
    virtual ~EnemyAgent(){}
};

class Tank : public EnemyAgent
{
    int _pos, _shieldLevel;
    const int score = 1;
public:
    Tank(int x, int shield)
    {
        _pos = x;
        _shieldLevel = shield;
    }
    int gotShot(int shoot)
    {
        if(_pos==shoot) return score;
        return 0;
    }
    ~Tank(){}
};

class Bomb : public EnemyAgent
{
    int _pos;
    const int score = -2;
public:
    Bomb(int pos)
    {
        _pos = pos;
    }
    int gotShot(int shoot)
    {
        if(_pos==shoot) return score;
        return 0;
    }
    ~Bomb(){}
};


class BonusAgent
{
public:
    virtual int hit(int shoot)=0;
    virtual ~BonusAgent(){};
};

class Gift : public BonusAgent
{
    int _pos;
    const int score = 2;
public:
    Gift(int pos)
    {
        _pos = pos;
    }
    int hit(int shoot)
    {
        if(_pos==shoot) return score;
        return 0;
    }
};

class Life : public BonusAgent
{
    int _pos;
    const int score = 3;
public:
    Life(int pos)
    {
        _pos = pos;
    }
    int hit(int shoot)
    {
        if(_pos==shoot) return score;
        return 0;
    }
};

class Factory
{
public:
    virtual EnemyAgent* createEnemyAgent()=0;
    virtual BonusAgent* createBonusAgentGift()=0;
};

class CombatGameFactory : public Factory
{

public:
    CombatGameFactory()
    {
        srand(time(0));
    }
    ~CombatGameFactory(){}
    EnemyAgent* createEnemyAgent()
    {
        int pos = rand() % 9 + 1;
        cout << "pos: " <<pos << endl;
        Tank* t = new Tank(pos,0);
        return t;
    }

    BonusAgent* createBonusAgentGift()
    {
        int pos = rand() % 9 + 1;
        Gift* g = new Gift(pos);
        return g;
    }
};

class MineSweepGameFactory : public Factory
{
public:
    MineSweepGameFactory()
    {
        srand(time(0));
    }
    ~MineSweepGameFactory(){}
    EnemyAgent* createEnemyAgent()
    {
        int pos = rand() % 9 + 1;
        cout << "pos: " <<pos << endl;
        Bomb* b = new Bomb(pos);
        return b;
    }

    BonusAgent* createBonusAgentGift()
    {
        int pos = rand() % 9 + 1;
        Life* l = new Life(pos);
        return l;
    }
};

class Game
{
    int _level;
    const int _lastLevel = 2;
    const int _scoreLimit = 4;
    vector<EnemyAgent*> _agents;
    vector<BonusAgent*> _bonuses;
    vector<Factory*> _levels;
    vector<int> _shoots;

public:
    Game()
    {
        _level = 1;
        _levels.push_back(new MineSweepGameFactory);
        _levels.push_back(new CombatGameFactory);
    }
    void start()
    {
        cout << "game started!"<< endl;
        while(_levels.size())
        {
            if(startLevel(_levels.back())==true)
            {
                _levels.pop_back();
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

    bool startLevel(Factory* level)
    {
        cout << "start level " << endl;
        getShootPosition();
        createGameAgents(level);
        int score = calcScore();
        cout << "your score: " << score << endl;
        clearLevel();
        if(score > _scoreLimit) return true;
        return false;
    }

    void createGameAgents(Factory* _factory)
    {
            for(int i=0; i<4; i++)
            {
                _bonuses.push_back(_factory->createBonusAgentGift());
                _agents.push_back(_factory->createEnemyAgent());
            }
     }

    void clearLevel()
    {
        for(auto it=_agents.begin(); it!=_agents.end(); ++it)
            delete *it;
        for(auto it=_bonuses.begin(); it!=_bonuses.end(); ++it)
            delete *it;
        _agents.clear();
        _bonuses.clear();
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
               int s = _agents[t]->gotShot(_shoots[i]);
               score += s;
               if(s>0) break;

           }
           for(size_t t=0; t< _bonuses.size(); t++)
           {
               int s = _bonuses[t]->hit(_shoots[i]);
               score += s;
               if(s>0) break;
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
