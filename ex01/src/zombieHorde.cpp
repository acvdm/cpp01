/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:04:47 by anvander          #+#    #+#             */
/*   Updated: 2025/03/09 19:43:35 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie      *horde;
    horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        std::cout
            << "Please name Zombie number " << i + 1 << ": ";
        getline(std::cin, name);
        if (std::cin.eof() == true)
        {
            std::cout
                << "Oh no! the last zombies will remained anonymous!"
                << std::endl;
            break;
        }
        horde[i].setName(name);
    }
    return (horde);
}