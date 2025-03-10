/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:15:08 by anvander          #+#    #+#             */
/*   Updated: 2025/03/10 19:23:22 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    _type = "";
    return ;
}

Weapon::Weapon(std::string type)
{
    _type = type;
    return ;
}

Weapon::~Weapon()
{
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