/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:31:06 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 10:31:08 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "Zombie " << this->_name << " Destroyed..." << std::endl;
        std::cout << "destructor called" << std::endl;

}

/* member function anounce zombie's name */

void Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

