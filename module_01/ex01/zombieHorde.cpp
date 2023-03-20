/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:29:21 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 10:29:23 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

/* incrementation of N zombies with for loop*/

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].setZombieName(name);
    }
    return (zombies);
}
