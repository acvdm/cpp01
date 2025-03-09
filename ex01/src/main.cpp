/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:01:35 by anvander          #+#    #+#             */
/*   Updated: 2025/03/09 19:47:35 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <string>

int input_valid(std::string input)
{
    int nbZombie;

    if (input.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout 
            << "Oops, only number formats are accepted"
            << std::endl;
        return (FALSE);
    }
    nbZombie = atoi(input.c_str());
    if (nbZombie <= 0)
    {
        std::cout 
            << "Are you afraid? Seriously, how many zombies do you want?"
            << std::endl;
        return (FALSE);
    }
    else if (nbZombie > 20)
    {
        std::cout
            << "Wow you really like Zombies! But we don't want the world to end, so please choose a number smaller than 20"
            << std::endl;
        return (FALSE);
    }
    
    return (nbZombie);
}

int main()
{
    std::string input;
    Zombie      *horde;
    
    int         nbZombie;
    
    do
    {
        std::cout 
        << "How many Zombie do you want? ";

        getline(std::cin, input);
        if (std::cin.eof() == true)
            return (FALSE);
    } while (!input_valid(input));
    nbZombie = atoi(input.c_str());
    std::string givenName[nbZombie + 1];
    
    std::cout 
        << "Gotcha! " << nbZombie << " zombies will be created 🧟" 
        <<std::endl;
    
    horde = zombieHorde(nbZombie, "anonymous");
    
    for(int i = 0; i < nbZombie; i++)
        horde[i].announce();        
    
    delete[] horde;
    return (TRUE);
}