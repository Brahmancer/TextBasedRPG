#ifndef Actor_h
#define Actor_h
#include <string>
#include <iostream>
using namespace std;

class Actor{
    string name;
    string classification; // determining whether they type of actor
    int location;
    int health;
public:
    // constructor with default health with 10
    // and defualt classification with "Actor"
    Actor(string name, string classification = "Actor", int health = 10);

    int getHealth();

    void setHealth(int health);

    ~Actor(); // desctructor
};

#endif
