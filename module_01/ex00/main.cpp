/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:30:37 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 10:30:40 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name );

int     main(void)
{
	Zombie *heapZombie = newZombie("john:");
	heapZombie->announce();
	delete heapZombie;
	randomChump("toto:");
	return (0);
}
