/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:48:19 by anvander          #+#    #+#             */
/*   Updated: 2025/03/21 14:17:13 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon  club = Weapon("crude spiked club");
        HumanA  bob("Bob", club);

        std::cout
            << std::endl << std::endl;
            
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    
    std::cout
        << std::endl << std::endl
        << "**************************************************************"
        << std::endl << std::endl;
        
    {
        Weapon  club = Weapon("crude spiked club");
        HumanB  jim("Jim");
        
        std::cout
            << std::endl << std::endl;
            
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();

        std::cout
            << std::endl << std::endl;
        
        Weapon  knife = Weapon("knife");
        jim.setWeapon(knife);
        jim.attack();
        
        std::cout
            << std::endl << std::endl;
    }

    return (0);
}
