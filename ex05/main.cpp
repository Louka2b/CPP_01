/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louka <louka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:27:48 by louka             #+#    #+#             */
/*   Updated: 2026/06/16 12:28:18 by louka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include "Harl.hpp"

int main(void) {
    Harl harl;

    std::cout << "--- TEST 1: DEBUG ---" << std::endl;
    harl.complain("DEBUG");

    std::cout << "--- TEST 2: INFO ---" << std::endl;
    harl.complain("INFO");

    std::cout << "--- TEST 3: WARNING ---" << std::endl;
    harl.complain("WARNING");

    std::cout << "--- TEST 4: ERROR ---" << std::endl;
    harl.complain("ERROR");

    std::cout << "--- TEST 5: INCONU ---" << std::endl;
    harl.complain("oe oe sa existe pas");

    return 0;
}