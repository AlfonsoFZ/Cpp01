/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:49:05 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 11:01:38 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/**
 * @brief Write a program that contains:
		•A string variable initialized to "HI THIS IS BRAIN".
		•stringPTR: A pointer to the string.
		•stringREF: A reference to the string.
		Your program has to print:
		•The memory address of the string variable.
		•The memory address held by stringPTR.
		•The memory address held by stringREF.
		And then:
		•The value of the string variable.
		•The value pointed to by stringPTR.
		•The value pointed to by stringREF.
 * @return int 
*/
int	main( void )
{
	std::string stringSTR = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringSTR;
	std::string &stringREF = stringSTR;

	std::cout << "The memory address held by stringSTR is: " << &stringSTR << std::endl;
	std::cout << "The memory address held by stringPTR is: " << &stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is: " << &stringREF << std::endl;
	std::cout << "The value of the string variable is: " << stringSTR << std::endl;
	std::cout << "The value pointed to by stringPTR is: " << *stringPTR  << std::endl;
	std::cout << "The value pointed to by stringREF is: " << stringREF  << std::endl;
	
	return (0);
}