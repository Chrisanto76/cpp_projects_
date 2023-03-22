#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type):_type(type)
{
    std::cout << "constructor weapon called" << std::endl;
    return ;
}

Weapon::~Weapon(void) {
    std::cout << "destructor weapon called" << std::endl;   
    std::cout << "========================" << std::endl;
    return ;
}

const   std::string    &Weapon::getType(void) const
{
    return this->_type;
}   

void				Weapon::setType(std::string new_Type)
{
    this->_type = new_Type;
    return;
}


