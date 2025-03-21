/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:32:30 by anvander          #+#    #+#             */
/*   Updated: 2025/03/21 14:26:24 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout
        << "Constructor called for Harl"
        << std::endl << std::endl;
        
    return ;
}

Harl::~Harl()
{
    std::cout
        << std::endl 
        << "Destructor called for Harl"
        << std::endl;
    
    return ;
}

void    Harl::debug()
{
    std::cout
        << "[DEBUG]" << std::endl
        << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
        << std::endl;
}

void    Harl::info()
{
    std::cout
        << "[INFO]" << std::endl
        << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
        << std::endl;
}

void    Harl::warning()
{
    std::cout
        << "[WARNING]" << std::endl
        << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
        << std::endl;
}

void    Harl::error()
{
    std::cout
        << "[ERROR]" << std::endl 
        << "This is unacceptable! I want to speak to the manager now."
        << std::endl;
}

int find_level(std::string *levels, std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            return (i);
    }
    return (-1);
}

void    Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    FuncPTR     functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    int i = find_level(levels, level);

    switch (i)
    {
        case 0:
            (this->*functions[0])();
            break ;
        
        case 1:
            (this->*functions[1])();
            break ;
                
        case 2:
            (this->*functions[2])();
            break ;
                
        case 3:
            (this->*functions[3])();
            break ;
                
        default:
            std::cout
                << "[ Probably complaining about insignificant problems ]"
                << std::endl;
    }
    
        
}