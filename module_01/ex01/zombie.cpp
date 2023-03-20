/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:29:31 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 10:29:35 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

/* constructor */
Zombie::Zombie(void)
{

}

/* destructor */
Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << "have been destroyed" << std::endl;
}

/* zombie name's announce */
void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* implementation of zombie's name */
void    Zombie::setZombieName(std::string name)
{
    this->_name = name;
}

