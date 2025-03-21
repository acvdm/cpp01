/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:15:08 by anvander          #+#    #+#             */
/*   Updated: 2025/03/21 14:11:31 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    _type = "";

    std::cout
        << "Constructor called for weapon of type " << _type
        << std::endl;
        
    return ;
}

Weapon::Weapon(std::string type)
{
    _type = type;

    std::cout
        << "Constructor called for weapon of type " << _type
        << std::endl;
    
    return ;
}

Weapon::~Weapon()
{
    std::cout
        << "Destructor called for weapon of type " << _type
        << std::endl;
    return ;
}

const std::string & Weapon::getType()
{
    const   std::string &typeREF = _type;
    return (typeREF);
}

void    Weapon::setType(std::string newType)
{
    this->_type = newType;
}