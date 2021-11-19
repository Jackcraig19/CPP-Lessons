#pragma once
#include <string>

class Entity
{
public:
    Entity(int health, int damage, std::string name);
    void attack(Entity &other);
    int getHealth();
    int getDamage();
    std::string getName();

private:
    int damage;
    int health;
    std::string name;
};