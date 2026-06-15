/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louka <louka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:47:25 by louka             #+#    #+#             */
/*   Updated: 2026/06/15 13:54:25 by louka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

    private :
    Weapon* weapon;
    std::string Name;
    
    public :
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon& arme);
    void attack(void);
};

#endif