/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:06:07 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 17:06:15 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief create a function that creates a Zombie on the stack 
 * and calls the announce function.
 * this zombie will be destroyed at the end of this function.
 * @param name 
 */
void	randomChump(std::string name)
{
	Zombie New_Zombie(name);
	New_Zombie.announce();
}
