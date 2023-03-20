/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:29:48 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 10:29:51 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

#define N 10

int main(void)
{
    Zombie  *zombies = zombieHorde(N, "Rodolfo ");

    for (size_t i = 0; i < N; i++)
    {
        zombies[i].announce();
    }

    delete [] zombies;
    return (0);
}
