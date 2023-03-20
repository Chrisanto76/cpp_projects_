/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:31:14 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 10:31:17 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include "Zombie.hpp"
# include <string>

class Zombie {

	private:
			std::string     _name;
	public:
			Zombie(std::string name);
			~Zombie(void);
			void announce( void );

};
 /* non members functions */
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif /* Zombie_HPP */
