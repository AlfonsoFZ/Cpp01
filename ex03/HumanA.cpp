#include "HumanA.hpp"

// HumanA::HumanA()
// {
// 	if(DEBUG)
// 		std::cout << "single constructor called" std::endl;
// }
HumanA::~HumanA()
{
	if(DEBUG)
		std::cout << "destructor called" << std::endl;
}

/**
 * @brief Construct a new Human A:: Human A object
 * 
 * in this case this constructor causes has caused problems 
 * becuase an uninitialized reference member in ‘class Weapon&’
 * 
 *	HumanA::HumanA(std::string nameA, Weapon& weaponA)
 *	{
 *		name = nameA;
 *		weapon = weaponA;
 *	}
 * 
 * using an initializer list as follows and compile with no problems
 * @param nameA 
 * @param weaponA 
 */
HumanA::HumanA( std::string nameA, Weapon &weaponA) : name(nameA), weapon(weaponA){}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl; 
}
