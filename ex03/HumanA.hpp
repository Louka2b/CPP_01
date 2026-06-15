/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louka <louka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:24:01 by louka             #+#    #+#             */
/*   Updated: 2026/06/15 13:41:04 by louka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

    private :
    Weapon& weapon;
    std::string Name;
    
    public :
    HumanA(std::string name, Weapon& arme);
    ~HumanA();
    void attack(void);
};

#endif
