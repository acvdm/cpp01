/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:36:42 by anvander          #+#    #+#             */
/*   Updated: 2025/03/09 15:25:35 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string name)
{
    _name = name;
    return ;
}

Zombie::~Zombie ()
{
    return ;
}

void    Zombie::announce()
{
    std::cout
        << _name
        << ": BraiiiiiiinnnzzzZ.."
        << std::endl;
}