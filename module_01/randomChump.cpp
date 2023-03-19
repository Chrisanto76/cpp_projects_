#include "Zombie.hpp"

/* on the stack */

void randomChump( std::string name )
{
    Zombie  zombi(name);
    zombi.announce();
}