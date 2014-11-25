#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include "Actor.h"


using namespace std;

Player player;

void characterCreation(Player & p);

int main() {
    characterCreation(player);
}

void characterCreation(Player & player){
    FILE * fp = fopen("CharacterClasses.txt", "r+");
    if (fp == NULL){
        cout << "Error in opening file! Game terminated" << endl;
        exit(-1);
    }
    string name, gender;
    cout << "Welcome hero." << endl;
    usleep(3250000); // sleep for 3.25 seconds
    cout << "I understand that you must be confused." << endl;
    usleep(3250000);
    cout << "But don't worry. I'm here to help." << endl;
    usleep(3250000);
    cout << "Let's start with your name. What is it?" << endl;
    cin >> name;
    cout << "I see. And are you a boy or girl(m/f)?" << endl;
    cin >> gender;
    cout << "Excellent. Now let's see what you're like." << endl;
    usleep(3250000);

    cout << "Which appeals to you the most? Select a number from below." << endl;

    cout << fp << endl;


}