#include <iostream>
#include "entity.hpp"

using namespace std;

int main() {
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    Entity player(10, 1, name);
    cout << "Welcome " << player.getName() << ", you have " << player.getHealth() << " health." << endl; 

    Entity enemy(2, 1, "Ugly Enemy");
    while (true) {
        cout << "What do you choose to do?" << endl;
        cout << "1) Attack" << endl;
        cout << "2) Run" << endl;
        int decision;
        cin >> decision;

        switch(decision) {
            case 1:
                cout << "You attack " << enemy.getName() << " for " << player.getDamage() << " damage!" << endl;
                player.attack(enemy);  
                break;
            case 2:
                cout << "You flee! You get away this time..." << endl;
                break;
            default:
                cout << "You are confused and do nothing!" << endl;
        }
        if (enemy.getHealth() <= 0) {
            cout << enemy.getName() << " has been slain! You are a hero!" << endl;
            enemy = Entity(2, 1, "Ugly Enemy");
            cout << player.getName() << " has encountered an " << enemy.getName() << "!!!!!!!!" << endl;
        } else {
            cout << enemy.getName() << " attacks you for " << enemy.getDamage() << " damage!" << endl; 
            enemy.attack(player);
            cout << "You now have " << player.getHealth() << " health and " << enemy.getName() << " now has " << enemy.getHealth() << " health." << endl;
        }
    }
}