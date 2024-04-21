#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/* libraries */
# include <iostream>
# include <cstdlib>

/* colours */
# define DEFAULT	"\033[0m"
# define BOLD		"\033[1m"
# define RED		"\033[31;1m"
# define GREEN		"\033[32;1m"
# define BLACK		"\033[30;1m"
# define YELLOW		"\033[33;1m"
# define BLUE		"\033[34;1m"
# define MAGENTA	"\033[35;1m"
# define CYAN		"\033[36;1m"
# define WHITE		"\033[37;1m"
# define LIGHT_RED		"\033[91m"
# define LIGHT_GREEN	"\033[92m"
# define LIGHT_YELLOW	"\033[93m"
# define LIGHT_BLUE	"\033[94m"
# define LIGHT_MAGENTA	"\033[95m"
# define LIGHT_CYAN	"\033[96m"
# define LIGHT_WHITE	"\033[97m"

/* messages */
# define EOFINSERT	"EOF has been inserted"
# define WRONGINPUT	"wrong input; please try again:"
# define INSERTNAME	"Insert a name to create a zombie on the stack: "
# define INSERTNEWNAME	"Insert a new name to create another zombie on the stack: "
# define ANNOUNCING	"Announcing Zombies from main function:"
# define INSERTNEWNAMEHEAP	"Insert a name to create a Zombie in the heap: "
# define ANNOUNCINGHEAP	"Announcing the zombie in the heap:"
# define FREEINGMEMORY	"Freeing allocated memory on heap:"
# define INSERTRANDOMCHUMP	"Insert a name to create a randomChump: "
# define LASTLINE	"End of main funtion reached, destructor called:"

class  Zombie
{
	public:

		Zombie(std::string name);
		~Zombie();
		void announce( void ); 

	private:

		std::string _name;
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif