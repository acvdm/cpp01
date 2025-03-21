/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:04:47 by anvander          #+#    #+#             */
/*   Updated: 2025/03/21 13:59:25 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie      *horde;
    horde = new Zombie[N];
    std::string pattern = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz -_";
    std::cout << std::endl;
    
    for (int i = 0; i < N; i++)
    {
        std::cout
            << "Please name Zombie number " << i + 1 << ": ";
        getline(std::cin, name);
        if (std::cin.eof() == true || name.find_first_not_of(pattern) != std::string::npos)
        {
            std::cout
                << std::endl
                << "That's a weird name! Sorry, the last zombies will remained anonymous!"
                << std::endl << std::endl;
            break;
        }
        horde[i].setName(name);
    }
    
    
    
    return (horde);
}