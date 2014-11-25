#include "Actor.h"

Actor::Actor(string name, string classification, int health){
    this->name = name;
    this->classification = classification;
    this->health = health;
    this->location = 1; // minimum setting for being alive
                        // center of the room
}

void Actor::setHealth(int health) {
    this->health = health;
}

int Actor::getHealth() {
    return this->health;
}


Actor::~Actor(){

    if (this->classification == "Player"){
        cout << "Game Over!" << endl;
    }
    delete this->name;
    this->location = 0; // dead
}