/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:23:11 by anvander          #+#    #+#             */
/*   Updated: 2025/03/11 17:44:36 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl        harl;
            
        harl.complain(av[1]);
        
        return (0);
    }

    std::cout
        << "ERROR: wrong number of arguments."
        << std::endl;
    return (1);
}