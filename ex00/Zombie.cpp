/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 13:54:14 by ldeplace          #+#    #+#             */
/*   Updated: 2026/06/13 14:09:12 by ldeplace         ###   ########.fr       */
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