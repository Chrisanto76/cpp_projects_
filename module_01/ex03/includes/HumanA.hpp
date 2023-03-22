#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../includes/Weapon.hpp"

class HumanA
{
private:
        std::string     _name;
        Weapon          &Weapon_referency;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
    void                attack(void) const;

};     

#endif /* HUMANA_HPP */