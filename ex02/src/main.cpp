/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:05:12 by anvander          #+#    #+#             */
/*   Updated: 2025/03/21 14:19:22 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string("HI THI IS BRAIN");
    
    std::string *stringPTR = &string;
    
    const std::string & stringREF = string;

    std::cout
        << "Memory address of the string variable " << &string
        << std::endl;

    std::cout
        << "Memory address held by stringPTR " << stringPTR
        << std::endl;

    std::cout
        << "Memory address held by stringREF " << &stringREF
        << std::endl;

    std::cout
        << std::endl
        << "***********************************************"
        << std::endl << std::endl;
        
    std::cout
        << "Value of the string variable " << string
        << std::endl;
        
    std::cout
        << "Value pointed to by stringPTR " << *stringPTR
        << std::endl;

    std::cout
        << "Value pointed to by stringREF " << stringREF
        << std::endl;

    return (0);
}