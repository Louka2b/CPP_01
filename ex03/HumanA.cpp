/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louka <louka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:23:55 by louka             #+#    #+#             */
/*   Updated: 2026/06/15 13:44:22 by louka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arme) : weapon(arme)
{
    Name = name;
}

HumanA::~HumanA()
{
    
}

void HumanA::attack(void)
{
    std::cout << Name << " attacks with their " << weapon.getType() << std::endl;
}