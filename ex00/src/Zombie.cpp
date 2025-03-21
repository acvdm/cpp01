/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:36:42 by anvander          #+#    #+#             */
/*   Updated: 2025/03/21 11:46:56 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string name)
{
    _name = name;
    
    std::cout
        << "Zombie " << _name << " created"
        << std::endl << std::endl;
    
    return ;
}

Zombie::~Zombie ()
{
    std::cout
        << "Zombie " << _name << " destructed"
        << std::endl;
    return ;
}

void    Zombie::announce()
{
    std::cout
        << _name
        << ": BraiiiiiiinnnzzzZ.."
        << std::endl << std::endl;
}