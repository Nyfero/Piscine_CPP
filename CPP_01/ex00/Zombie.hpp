#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
	public:
		Zombie(std::string a_name);
		~Zombie();
		void announce(void);
		
	private:
		std::string m_name;
};

Zombie* newZombie(std::string a_name);
void randomChump(std::string a_name);

#endif
