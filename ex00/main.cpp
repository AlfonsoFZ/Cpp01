/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:49:05 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 17:10:42 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief create a safer function to get input from the user
 * avoiding infintive loops when pressing ctr + d.
 * please note that an empty string is nos considered the same as 
 * a string with only spaces or tabs
 * @param prompt 
 * @return std::string 
 */
std::string	safe_cin(std::string prompt)
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
			std::cerr << LIGHT_RED WRONGINPUT << std::endl << DEFAULT ;
		std::cin.clear();
	}
	return(input);
}

/**
 * @brief prompt the user to input a name and create two zombies on the stack
 * and one on the heap and to create a randomChump.
 * 
 * the first two zombies are created on the stack and thery are destroy
 * at the end of the main function, the third one is created on the heap and 
 * should be free (delete) to avoid leaks.
 * 
 * last of all the randomChump is created and destroyed in the same function
 * as it is created in a separate function that call the destructore while 
 * exting the function.
 * 
 * @return int 
 */
int	main(void)
{
	std::cout << std::endl;
	Zombie zombi0(safe_cin(LIGHT_GREEN INSERTNAME DEFAULT));
	Zombie zombi1(safe_cin(LIGHT_BLUE INSERTNEWNAME DEFAULT));
	Zombie zombi2(safe_cin(LIGHT_BLUE INSERTNEWNAME DEFAULT));
	Zombie zombi3(safe_cin(LIGHT_GREEN INSERTNEWNAME DEFAULT));
	Zombie *zombiHeap = newZombie(safe_cin(LIGHT_CYAN INSERTNEWNAMEHEAP DEFAULT));
	std::cout << ANNOUNCING	<< std::endl;
	std::cout << "\t" << LIGHT_GREEN;
	zombi0.announce();
	std::cout << "\t" << LIGHT_BLUE;
	zombi1.announce();
	std::cout << "\t" << LIGHT_BLUE;
	zombi2.announce();
	std::cout << "\t" << LIGHT_GREEN;
	zombi3.announce();
	std::cout << DEFAULT ANNOUNCINGHEAP DEFAULT << std::endl;
	std::cout << "\t" << LIGHT_CYAN;
	zombiHeap->announce();
	std::cout << DEFAULT FREEINGMEMORY << std::endl;
	std::cout << "\t" << LIGHT_CYAN;
	delete zombiHeap;
	std::cout << std::endl;
	randomChump(safe_cin(LIGHT_MAGENTA INSERTRANDOMCHUMP DEFAULT));
	std::cout << std::endl;
	std::cout << LIGHT_MAGENTA LASTLINE DEFAULT  << std::endl;
	return 0;
}
