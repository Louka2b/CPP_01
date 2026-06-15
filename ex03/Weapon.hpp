/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louka <louka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:11:14 by louka             #+#    #+#             */
/*   Updated: 2026/06/15 13:25:07 by louka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
    
    private :
    std::string type;
    
    public :
    Weapon(std::string str);
    ~Weapon();
    const std::string& getType() const;
    void setType(std::string str);
};

#endif