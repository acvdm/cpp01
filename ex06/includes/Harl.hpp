/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:23:48 by anvander          #+#    #+#             */
/*   Updated: 2025/03/11 15:56:28 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define DEBUG 1
#define INFO 2
#define WARNING 3
#define ERROR 4

class Harl
{
    public:
    
        Harl();
        ~Harl();

        void    complain(std::string level);

    private:
    
        void    debug();
        void    info();
        void    warning();
        void    error();
          
    typedef void  (Harl::*FuncPTR)();
        
};

#endif