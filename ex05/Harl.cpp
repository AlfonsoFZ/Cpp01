/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:50:18 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/04 17:24:44 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << DEBUGMSG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFOMSG << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNINGMSG << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERRORMSG <<std::endl;
}

/**
 * @brief eith 2 arrays compares the string and use the position
 * to get the rigth pointer to function and call it
 * i value is used to check if a "valid" level was found or 
 * send a message if not.
 * 
 * @param level 
 */
void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = -1;

	while (++i < 4)
	{
		if (levels[i].compare(level) == 0)
		{
			(this->*function[i])();
			i = 5;
		}
	}
	if (i == 4)
		std::cout << "Invalid level" << std::endl;
}
