/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:12:23 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 17:12:33 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief  allocate N Zombie objects in a single allocation.
 * Then, it has to initialize the zombies, giving each one of them
 * the name passed as parameter.
 * The function returns a pointer to the first zombie.
 * 
 * new allocates enough memory for the array of N zombies and returns
 * a pointer to the first element of the array.
 * 
 * a set funstion has been created to set the private attribute _name
 * @param N 
 * @param name 
 * @return Zombie* 
 */
Zombie *zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
