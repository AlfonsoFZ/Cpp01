/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:26:34 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 17:12:36 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed." << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump(std::string name)
{
	Zombie New_Zombie(name);
	New_Zombie.announce();
}

Zombie*	newZombie(std::string name)
{
	Zombie *New_Zombie = new Zombie(name);
	return (New_Zombie);
}
