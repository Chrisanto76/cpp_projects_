#include "Zombie.hpp"

void randomChump( std::string name );

int     main(void)
{
    Zombie *heapZombie = newZombie("john:");
    heapZombie->announce();
    delete heapZombie;
    randomChump("toto:");
    return (0);
}