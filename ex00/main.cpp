/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeplace <ldeplace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 13:54:03 by ldeplace          #+#    #+#             */
/*   Updated: 2026/06/13 14:02:12 by ldeplace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    std::cout << "Create zombie on stack :" << std::endl;
    randomChump("StackZombie");
    std::cout << "randomChump finish.\n" << std::endl;

    std::cout << "Create zombie on heap :" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    std::cout << "zombie is alive" << std::endl;
    delete heapZombie; 

    return 0;
}