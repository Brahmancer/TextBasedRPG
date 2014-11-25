#include "Actor.h"
#include <cstdlib>

class Player: public Actor{
    int strength; //default strength for melee attacks
                       // also used for pushing and pulling objects in the world
    int agility ; // default agility for ranged attacks
                      // also used for dodging.
    int constitution ; // default for stamina (aka running)
                       // this will also help in determining health
    int intelligence; // default for magical attacks and knowledge of the world
    int charisma; // used for talking and persuading others

public:

    Player(int strength, int agility, int constitution, int intelligence, int charisma): Actor(name, "Player", health)
    {
        //this->name = name;
        this->strength = strength;
        this->agility = agility;
        this->intelligence = intelligence;
        this->constitution = constitution;
        this->charisma = charisma;
        //setHealth(getHealth());

    }

    void masterbate(){
        int randomDeath = rand() % 2+1;
        if (randomDeath == 1) {
            cout << "You take off your pants and masterbate furiously and die." << endl;
        }
        if (randomDeath == 2){
            cout << "You masterbate so hard, you dehydrate yourself. You collapse and die from lack of water."<< endl;
        }
        this->setHealth(0);
    }

};