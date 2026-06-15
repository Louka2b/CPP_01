/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louka <louka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:07:19 by louka             #+#    #+#             */
/*   Updated: 2026/06/15 12:15:17 by louka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;
    
    std::cout << "brain adr       :" << &brain << std::endl;
    std::cout << "stringPTR adr.  :" << &stringPTR << std::endl;
    std::cout << "stringREF adr   :" << &stringREF << std::endl << std::endl;

    std::cout << "brain value     :" << brain << std::endl;
    std::cout << "stringPTR value :" << stringPTR << std::endl;
    std::cout << "stringREF value :" << stringREF << std::endl;
    return(1);
}