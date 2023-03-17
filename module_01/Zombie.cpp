#include "Zombie.hpp"

/* constructor */

Zombie::Zombie(std::string name)
{
    this->_name  = name;
    std::cout << "constructor called" << std::endl;
}

/* destructor */

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->_name << "Destroyed..." << std::endl;
        std::cout << "destructor called" << std::endl;

}

/* member function */
void Zombie::announce(void)
{
    std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

