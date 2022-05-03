#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string a_name);
		~Zombie();
		void setName(std::string a_name);
		void announce(void);
		
	private:
		std::string m_name;
};

Zombie* zombieHorde(int N, std::string a_name);

#endif
