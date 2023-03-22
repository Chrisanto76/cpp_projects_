#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
        std::string     _name;
        Weapon          &Weapon_referency;
public:
    HumanA(std::string name, Weapon &Weapon);
    ~HumanA(void);
    void                attack(void) const;
    
};     

#endif /*HUMANA_HPP */