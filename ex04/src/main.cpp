/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:17:37 by anvander          #+#    #+#             */
/*   Updated: 2025/03/11 14:18:34 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string createNewFilename(std::string filename)
{
    std::string newFilename;
    std::string ext(".replace");
    
    newFilename = filename + ext;
    
    return (newFilename);
}

int main(int ac, char **av)
{
    
    if (ac == 4)
    {
        std::ifstream         infile(av[1]);
        std::string           line;
        std::string           s1(av[2]);
        std::string           s2(av[3]);
        
        if (infile.is_open())
        {
            std::string		outFilename(createNewFilename(av[1]));
            std::ofstream   outfile(outFilename.c_str());
			
			if (outfile.is_open())
			{
            	while (getline(infile, line))
            	{
            	    if (line == s1)
            	        outfile << s2 << std::endl;
            	    else
            	        outfile << line << std::endl;
            	}
			}
			else
			{
				std::cout
					<< "Error: cannot open file " << outFilename
					<< std::endl;
					
				infile.close();
			}
				
        }
        else
        {   
            std::cout
                << "Error: cannot open file " << av[1]
                << std::endl;
        }    
        return (0);
    }
    
    std::cout
        << "Error: wrong number of arguments"
        << std::endl;
        
    return (1);
}