#include "../includes/HumanA.hpp"

//initialisation list of HumanA constructor
HumanA::HumanA(std::string name, Weapon &Weapon):_name(name), Weapon_referency(Weapon)
{
    std::cout << "constructor called" << std::endl;
    return;
}
//destructor
HumanA::~HumanA(void)
{
    std::cout << "desructor called" << std::endl;
    return;
}

void    HumanA::attack(void) const
{
    std::cout << this->_name << "attacks with";
    std::cout << this->Weapon_referency.getType() << std::endl;
}