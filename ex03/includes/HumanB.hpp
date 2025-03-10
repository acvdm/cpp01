/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:14:12 by anvander          #+#    #+#             */
/*   Updated: 2025/03/10 19:38:41 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
    
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void    attack(void);
        void    setWeapon(Weapon& weaponType);
    
    private:
    
        std::string _name;
        Weapon      *_weaponB;
};

#endif