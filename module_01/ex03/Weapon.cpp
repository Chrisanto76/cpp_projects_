#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->setType(type);
    return ;
}

Weapon::~Weapon(void) {
    return ;
}

const   std::string&    Weapon::getType(void) {
    return this->type;
}

void                    Weapon::setType(std::string newType) {
    this->type = newType;
}


