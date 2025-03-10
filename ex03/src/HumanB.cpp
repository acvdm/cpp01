/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:37:46 by anvander          #+#    #+#             */
/*   Updated: 2025/03/10 19:38:49 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB()
{
    _name = "";
    _weaponB = NULL;
    return ;
}

HumanB::HumanB(std::string name)
{
    _name = name;
    _weaponB = NULL;
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void    HumanB::setWeapon(Weapon& weaponType)
{
    _weaponB = &weaponType;
}

void    HumanB::attack(void)
{
    std::cout
        << _name
        << " attacks with their "
        << _weaponB->getType()
        << std::endl;
}