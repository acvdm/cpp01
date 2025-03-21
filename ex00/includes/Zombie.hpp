/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:50:43 by anvander          #+#    #+#             */
/*   Updated: 2025/03/19 14:53:21 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();

        void    announce(void);

    private:
        std::string _name;
};

Zombie  *newZombie(std::string name);    
void    randomChump(std::string name);
        
#endif