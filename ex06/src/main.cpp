/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:23:11 by anvander          #+#    #+#             */
/*   Updated: 2025/03/11 15:58:50 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl        harl;
        std::string level(av[1]);
        int         levelNum;

        levelNum = atoi(level.c_str());
        
        switch (levelNum)
        {
            case 1;
                harl.complain("DEBUG");
                break;
                
            
            harl.complain("DEBUG");
            harl.complain("INFO");
            harl.complain("WARNING");
            
            std::cout
                << "Test with an empty complain : ";
            harl.complain("");
        }
        
        return (0);
    }

    std::cout
        << "ERROR: wrong number of arguments."
        << std::endl;
    return (1);
}