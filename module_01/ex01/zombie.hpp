/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:29:05 by apoure            #+#    #+#             */
/*   Updated: 2023/03/20 10:29:11 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class   Zombie {

    private:
            std::string _name;
    public:
            Zombie(void);
            ~Zombie(void);
            void    announce(void);
            void    setZombieName(std::string name);
};

Zombie*  zombieHorde(int N, std::string name);

#endif /* ZOMBIE_HPP*/
