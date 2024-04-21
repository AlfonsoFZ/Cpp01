/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:52:21 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/05 11:27:07 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

/*colours */
# define DEFAULT		"\033[0m"
# define LIGHT_RED		"\033[91m"
# define LIGHT_GREEN	"\033[92m"
# define LIGHT_YELLOW	"\033[93m"
# define LIGHT_BLUE		"\033[94m"
# define LIGHT_MAGENTA	"\033[95m"
# define LIGHT_CYAN		"\033[96m"
# define LIGHT_WHITE	"\033[97m"

/*messages*/
#define DEBUGMSG "I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-special-ketchup burger. \nI really do!"
#define INFOMSG "I cannot believe adding extra bacon costs more money. \nYou \
didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNINGMSG "I think I deserve to have some extra bacon for free. \nI’ve \
been coming for years whereas you started working here since last month."
#define ERRORMSG "This is unacceptable! I want to speak to the manager now."

/*libraries*/
#include <iostream>

class Harl
{
	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		
	public:
		
		void	complain( std::string level );
};

#endif