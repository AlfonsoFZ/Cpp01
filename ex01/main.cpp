/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:49:05 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 11:03:46 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# include <limits>

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

std::string	getStr(std::string prompt)
{
	std::string	input;

	while (1)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cerr << std::endl << LIGHT_RED EOFINSERT DEFAULT << std::endl;
			exit(0);
		}
		else if (std::cin.good() && !input.empty())
			break ;
		else
			std::cerr << LIGHT_RED WRONGINPUT DEFAULT ;
		std::cin.clear();
	}
	return(input);
}

int getNumber()
{
	int number;
	number = -1;
	while (number < 0)
	{
		std::cin >> number;
		if (std::cin.eof())
		{
			std::cout << std::endl << LIGHT_RED << EOFINSERT << std::endl << DEFAULT;
			exit(0);
		}
		else if (std::cin.fail())
		{
			std::cout << LIGHT_RED " -- wrong number -- " DEFAULT << std::endl;
			std::cout << LIGHT_GREEN " -- try again -- " DEFAULT << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			number = -1;
		}
		else if (number < 1)
		{
			std::cout << LIGHT_RED " -- wrong number of zombies - please use a positive number -- " DEFAULT << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return (-1);
		}
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (number);
}


/**
 * @brief prompt the user to input a name and number of zombies
 * that will be created,they will  be announced and deleted
 * before arrive at the end of the function.
 * @return int 
 */
int	main(void)
{
	std::string name;
	int number;
	std::cout << std::endl;
	name = getStr(LIGHT_GREEN INSERTNAME DEFAULT);
	if (name.empty())
		return (1);
	std::cout << LIGHT_YELLOW INSERTNUMBER DEFAULT ;
	number = getNumber();
	if (number == -1)
		return (0);
	Zombie *ZombieHorde = zombieHorde(number, name);
	std::cout << LIGHT_MAGENTA ANNOUNCING DEFAULT<< std::endl;
	for (int i = 0; i < number ; i++)
	{
	std::cout << "Zombie nº: " << (i  + 1) << ": ";
	ZombieHorde[i].announce();
	}
	std::cout << LIGHT_MAGENTA FREEINGMEMORY DEFAULT  << std::endl;
	delete[] ZombieHorde;
	std::cout << LIGHT_MAGENTA LASTLINE DEFAULT  << std::endl;
	return (0);
}
