/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:47:56 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 11:30:10 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;
	std::string	input;

	if ( ac == 2)
		input = av[1];
	else
	{
		std::cout << "Choose one of the following filters: " << std::endl;
		std::cout << "- DEBUG - INFO - WARNING - ERROR -" << std::endl;	
		std::cin >> input;
	}
	harl.complain(input);
	return 0;
}
