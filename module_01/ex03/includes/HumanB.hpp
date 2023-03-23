/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:09:33 by apoure            #+#    #+#             */
/*   Updated: 2023/03/23 08:09:38 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
        std::string    _name;
        Weapon         *weapon; 
public:
    HumanB(std::string name);
    ~HumanB(void);

    void                setWeapon(Weapon &weapon);
    void                attack(void) const;
};

#endif /* HUMANB_HPP */
