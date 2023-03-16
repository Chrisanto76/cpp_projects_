#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include "Zombie.hpp"
# include <string>

class Zombie {

    private:
            std::string     _name;
    public:
            Zombie(void);
            ~Zombie(void);

            void announce( void );

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif /* Zombie_HPP */