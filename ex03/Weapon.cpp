/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louka <louka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:16:01 by louka             #+#    #+#             */
/*   Updated: 2026/06/15 13:24:36 by louka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    type = str;
}

Weapon::~Weapon()
{   
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string str)
{
    type = str;
}