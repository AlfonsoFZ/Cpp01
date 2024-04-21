/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:05:40 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 17:05:44 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief allocates memory for a new Zombie on the heap and returns a 
 * pointer to it.
 * It can be used from the funstion that have called and it 
 * should be deleted to avoid leaks.
 * 
 * @param name 
 * @return Zombie* (a pointer to the new Zombie on the heap.)
 */
Zombie*	newZombie(std::string name)
{
	Zombie *New_Zombie = new Zombie(name);
	return (New_Zombie);
}