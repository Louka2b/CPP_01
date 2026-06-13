/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:40:34 by ldeplace          #+#    #+#             */
/*   Updated: 2026/06/13 14:51:46 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) 
{
}

Zombie::~Zombie() 
{
    std::cout << _name << ": has been destroyed" << std::endl;
}

void Zombie::announce(void) 
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) 
{
    Zombie* zombieOnHeap = new Zombie(name);
    zombieOnHeap->announce();
    return zombieOnHeap;
}