/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:47:56 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/04 17:30:35 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	std::string	input;
	std::cout << "Enter one of the following levels: " << std::endl;
	std::cout << "- DEBUG - INFO - WARNING - ERROR -" << std::endl;	
	std::cin >> input;
	harl.complain(input);
	return 0;
}