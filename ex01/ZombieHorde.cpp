/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 14:48:11 by ldeplace          #+#    #+#             */
/*   Updated: 2026/06/13 14:52:19 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
{
    int i = 0;
    Zombie *horde[N];
    
    while(i <= N)
    {
        horde[i] == newZombie();
        i++;
    }
    return(horde);
}