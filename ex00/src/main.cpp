/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander <anvander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:49:49 by anvander          #+#    #+#             */
/*   Updated: 2025/03/20 16:09:11 by anvander         ###   ########.fr       */
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