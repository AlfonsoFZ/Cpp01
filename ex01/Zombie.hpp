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
# define INSERTNAME	"Insert a name to create a zombie horde: "
# define INSERTNUMBER	"Insert the number of Zombies for your horde: "
# define ANNOUNCING	"Announcing horde:"
# define FREEINGMEMORY	"Freeing allocated memory."
# define LASTLINE	"End of the main function before the return line."

class  Zombie
{
	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce( void ); 
		void setName(std::string name);

	private:

		std::string _name;
};

#endif