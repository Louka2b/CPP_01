/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:40:51 by ldeplace          #+#    #+#             */
/*   Updated: 2026/06/13 14:47:29 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
    std::string _name;
    
    public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif