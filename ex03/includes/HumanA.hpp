/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:10:58 by anvander          #+#    #+#             */
/*   Updated: 2025/03/10 19:28:03 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
    
        HumanA();
        HumanA(std::string name, Weapon& weaponType);
        ~HumanA();
        void    attack(void);
    
    private:
    
        std::string _name;
        Weapon& _weaponA;
};

#endif

