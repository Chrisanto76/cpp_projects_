#include "../includes/HumanB.hpp"


//initialisation list of HumanB constructor

HumanB::HumanB(std::string _name):_name(_name), weapon(NULL)
{
    std::cout << "constructor HumanB called" << std::endl;
    std::cout << "=========================" << std::endl;
    return;
}
//destructor
HumanB::~HumanB(void)
{
    std::cout << "destructor HumanB called" << std::endl;
    return;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
    return;
}

void HumanB::attack(void) const
{
    if(this->weapon == NULL)
        std::cout << this->_name << "attacks with" << "no weapon" << std::endl;
    else
    {
        std::cout << this->_name << "attacks with ";
        std::cout << this->weapon->getType() << std::endl;
    }
    return ;
}