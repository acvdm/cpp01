/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:17:37 by anvander          #+#    #+#             */
/*   Updated: 2025/03/12 13:31:10 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string createNewFilename(std::string filename)
{
    std::string newFilename;
    std::string ext(".replace");
    
    newFilename = filename + ext;
    
    return (newFilename);
}

std::string readInfile(std::ifstream& infile)
{
    std::string content;
    std::string line;
    char        c;
    
    while (getline(infile, line))
    {
        content += line;
        if (!infile.eof())
            content += '\n';
    }
     
    if (infile.get(c))
        content += c;

    return (content);
}

int readAndReplace(const std::string filename, std::string s1, std::string s2)
{
    std::ifstream         infile(filename.c_str());
    std::string           content;
    size_t                pos;
    
    if (!infile.is_open())
    {
        std::cout
            << "Error: cannot open infile " << filename
            << std::endl;
        return (1);
    }
    
    std::string		outFilename(createNewFilename(filename));
    std::ofstream   outfile(outFilename.c_str());
	
	if (!outfile.is_open())
	{
        std::cout
        << "Error: cannot create outfile " << outFilename
        << std::endl;
        
        infile.close();
        return (1);
    }
    
    content = readInfile(infile);
        
    pos = content.find(s1);
    while (pos < content.length())
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos = content.find(s1, pos + s2.length());
    }
    outfile << content;
    
    return (0);
}

int main(int ac, char **av)
{
    
    if (ac != 4)
    {
        std::cout
            << "Error: wrong number of arguments"
            << std::endl;
        return (1);
    }
    
    if (readAndReplace(av[1], av[2], av[3]))
        return (1);      
    return (0);
}  