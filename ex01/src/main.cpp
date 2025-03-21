/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:01:35 by anvander          #+#    #+#             */
/*   Updated: 2025/03/21 14:03:11 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <string>
#include <limits.h>
#include <errno.h>

int input_valid(std::string input)
{
    long int nbZombie;
    errno = 0;

    if (input.find_first_not_of("-+0123456789") != std::string::npos)
    {
        std::cout 
            << "Oops, only number formats are accepted. Try again!"
            << std::endl << std::endl;
        return (FALSE);
    }
    
    nbZombie = strtol(input.c_str(), NULL, 10);
    if (errno == ERANGE) 
    {
        std::cout 
            << "ERROR: Sorry mate, large numbers are not recognized. Try again!"
            << std::endl << std::endl;
        return (FALSE);
    }
    if (nbZombie <= 0)
    {
        std::cout
            << std::endl
            << "Are you afraid? Seriously, how many zombies do you want?"
            << std::endl << std::endl;
        return (FALSE);
    }
    else if (nbZombie > 20)
    {
        std::cout
            << "Wow you really like Zombies, but for everybody's sake choose a number smaller than 20"
            << std::endl << std::endl;
        return (FALSE);
    }
    
    return (nbZombie);
}

int main()
{
    std::string input;
    Zombie      *horde;
    
    long int         nbZombie;
    
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
        << std::endl
        << "Gotcha! " << nbZombie << " zombies will be created 🧟" 
        << std::endl << std::endl;
    
    horde = zombieHorde(nbZombie, "anonymous");
    
    std::cout      
        << std::endl;
    for(int i = 0; i < nbZombie; i++)
        horde[i].announce();
    std::cout      
        << std::endl;
    delete[] horde;
    return (TRUE);
}