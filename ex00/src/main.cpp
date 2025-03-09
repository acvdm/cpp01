/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:35:30 by anvander          #+#    #+#             */
/*   Updated: 2025/03/09 15:40:31 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
dynamic allocation to create an object whose lifespan exceeds the block code 
where it was instantiated
*/
int	main()
{
	Zombie	*heapZombie = newZombie("Heap");
	heapZombie->announce();
	
	randomChump("Stack");
	
	delete (heapZombie);
	return (0);
}