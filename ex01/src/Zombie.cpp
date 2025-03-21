/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:02:00 by anvander          #+#    #+#             */
/*   Updated: 2025/03/21 12:15:53 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    _name = "anonymous";
    
    std::cout
        << "Zombie created with no name for now"
        << std::endl;
        
    return ;
}

Zombie::Zombie(std::string name)
{
    _name = name;

    std::cout
        << "Zombie " << _name << " created"
        << std::endl;
        
    return ;
}

Zombie::~Zombie()
{
    std::cout
        << "Zombie " << _name << " destructed"
        << std::endl;
    return ;
}

void    Zombie::setName(std::string name)
{
    _name = name;
    return ;
}

void    Zombie::announce()
{
    std::cout
        << _name
        << ": BraiiiiiiinnnzzzZ.."
        << std::endl;
}