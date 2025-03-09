/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:50:21 by anvander          #+#    #+#             */
/*   Updated: 2025/03/09 19:31:02 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define TRUE 1
#define FALSE 0

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();

        void    announce(void);
        void    setName(std::string name);


    private:
        std::string _name;
};

Zombie *zombieHorde(int N, std::string name);
        
#endif