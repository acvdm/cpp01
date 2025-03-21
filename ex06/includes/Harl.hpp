/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:23:48 by anvander          #+#    #+#             */
/*   Updated: 2025/03/21 14:24:42 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

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