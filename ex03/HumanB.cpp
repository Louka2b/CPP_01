/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louka <louka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:48:42 by louka             #+#    #+#             */
/*   Updated: 2026/06/15 13:54:25 by louka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    Name = name;
    weapon = NULL;
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(Weapon& arme)
{
    weapon = &arme;
}

void HumanB::attack(void)
{
    if (weapon != NULL) {
        std::cout << Name << " attacks with their " << weapon->getType() << std::endl;
    }
}