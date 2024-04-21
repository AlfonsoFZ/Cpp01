#ifndef HUMANB_HPP
# define HUMANB_HPP
 
#include "Weapon.hpp"
#include <iostream>

class HumanB{

	public:

		HumanB(std::string name);
		~HumanB( void );	
		void attack( void );
		void setWeapon(Weapon &weapon);

	private:
		std::string name;
		Weapon *weapon;
};
#endif

/**
 * In this case a pointer to weapon is needed as not always a weapon will be available
 * and a reference cannot be null or not initiated
 */