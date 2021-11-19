#include "entity.hpp"

#include <string>

using namespace std;

Entity::Entity(int health, int damage, string name) {
    this->health = health;
    this->damage = damage;
    this->name = name;
}

void Entity::attack(Entity& other) {
    other.health -= damage;
}
int Entity::getHealth() {
    return health;
}

string Entity::getName() {
    return name;
}

int Entity::getDamage() {
    return damage;
}