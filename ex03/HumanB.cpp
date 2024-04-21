#include "HumanB.hpp"

// HumanB::HumanB()
// {
// 	if(DEBUG)
// 		std::cout << "single constructor called" std::endl;
// }
HumanB::~HumanB()
{
	if(DEBUG)
		std::cout << "destructor called" << std::endl;
}

/**
 * @brief Construct a new HumanB:: Human B object
 * 
 * In this case this constructor causes problems with HumanA 
 * becuase an uninitialized reference member in ‘class Weapon&’
 * 
 *	HumanB::HumanB(std::string nameA, Weapon& weaponA)
 *	{
 *		name = nameA;
 *		weapon = weaponA;
 *	}
 * 
 * so I have left as it was removing the weapon parameter
 * 
 * @param nameB
 */
HumanB::HumanB( std::string nameB) : name(nameB){
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if(this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl; 
	else	
		std::cout << name << " has no weapon to attack with" << std::endl;
}
