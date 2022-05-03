#include "../class/Zombie.hpp"

Zombie* zombieHorde(int N, std::string a_name)
{
	int	i = 0;
	Zombie	*horde = new Zombie[N];
	while (i < N)
	{
		horde[i].setName(a_name);
		i++;
	}
	return (horde);
}
