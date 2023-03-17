#include "Zombie.hpp"

void randomChump( std::string name );

int     main(void)
{
    Zombie *heapZombie = newZombie("heap_john ");
    heapZombie->announce();
    delete heapZombie;
    randomChump("stack_tonia ");
    return (0);
}