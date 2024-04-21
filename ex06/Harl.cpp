/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:50:18 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 11:24:35 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << std::endl << "[ DEBUG ]" << std::endl;
	std::cout << DEBUGMSG << std::endl;
}

void	Harl::info(void)
{
	std::cout << std::endl << "[ INFO ]" << std::endl;
	std::cout << INFOMSG << std::endl;
}

void	Harl::warning(void)
{
	std::cout << std::endl << "[ WARNING ]" << std::endl;
	std::cout << WARNINGMSG << std::endl;
}

void	Harl::error(void)
{
	std::cout << std::endl << "[ ERROR ]" << std::endl;
	std::cout << ERRORMSG << std::endl;
	std::cout << std::endl;
}

/**
 * @brief with the first array we compare the string and use the position
 * of the "match" to get the constant value for the switch statement.
 * 
 * As no break statment has been include untill the last option 
 * the code will be read from the first case that match the value untill 
 * the break, if it is not included we will read untill 
 * the end of the switch statement.
 *
 * the fall through comment is used to avoid error message dsiplayed for one 
 * of the flags used while compiling
 * 
 * @param level 
 */
void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = -1;
	
	while (++i < 4)
		if (levels[i].compare(level) == 0)
			break;
	switch (i) {
		case 0:
			(this->*function[0])();
			// fall through
		case 1:
			(this->*function[1])();
			// fall through
		case 2:
			(this->*function[2])();
			// fall through
		case 3:
			(this->*function[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
		
}
