/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louka <louka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:58:58 by louka             #+#    #+#             */
/*   Updated: 2026/06/15 15:48:55 by louka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

std::string ft_replace(const std::string& content, const std::string& s1, const std::string& s2) 
{
    if (s1.empty()) 
        return content;
    std::string result;
    size_t prev = 0;
    size_t pos = 0;

    while ((pos = content.find(s1, prev)) != std::string::npos) {
        result.append(content, prev, pos - prev);
        result.append(s2);
        prev = pos + s1.length();
    }

    result.append(content, prev, std::string::npos);
    return result;
}

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "programe need three argument" << std::endl;
        return(0);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream ifs(filename.c_str());
    if (!ifs.is_open())
    {
        std::cerr << "Error: cannot open input file" << std::endl;
        return (1);
    }
    std::stringstream buffer;
    buffer << ifs.rdbuf();
    std::string content = buffer.str();
    ifs.close();
    std::string output = ft_replace(content, s1, s2);
    std::ofstream ofs((filename + ".replace").c_str());
    if (!ofs.is_open())
    {
        std::cerr << "Error: cannot create output file" << std::endl;
        return (1);
    }
    ofs << output;
    ofs.close();
    return (0);
}
