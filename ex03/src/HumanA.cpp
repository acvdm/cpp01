/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:20:59 by anvander          #+#    #+#             */
/*   Updated: 2025/03/10 19:31:37 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weaponType):  _name(name), _weaponA(weaponType)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout
        << _name
        << " attacks with their "
        << _weaponA.getType()
        << std::endl;
}