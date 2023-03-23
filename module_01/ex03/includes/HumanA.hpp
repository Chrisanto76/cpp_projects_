/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 08:09:22 by apoure            #+#    #+#             */
/*   Updated: 2023/03/23 08:09:24 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
