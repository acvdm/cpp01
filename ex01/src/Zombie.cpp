/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:02:00 by anvander          #+#    #+#             */
/*   Updated: 2025/03/09 19:42:23 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    _name = "anonymous";
    return ;
}

Zombie::Zombie(std::string name)
{
    _name = name;
    return ;
}

Zombie::~Zombie()
{
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