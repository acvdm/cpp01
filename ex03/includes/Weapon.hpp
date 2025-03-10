/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:07:37 by anvander          #+#    #+#             */
/*   Updated: 2025/03/10 12:24:48 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
    
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        
        const std::string & getType();
        void    setType(std::string newType);

    private:
    
        std::string _type;
};

#endif
