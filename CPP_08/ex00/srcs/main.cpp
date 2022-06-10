# include "../class/easyfind.hpp"

int main( void )
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		std::vector<int>	tab(7);
		tab[0] = 42;
		tab[1] = 6;
		tab[2] = 32;
		tab[3] = 80;
		tab[4] = 4;
		tab[5] = 100;
		DispVector(tab, tab.size());
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---EASYFIND---\e[39m" << std::endl << std::endl;
		{
			try
			{
				std::cout << "42 is at place : ";
				std::cout << easyfind(tab, 42) << std::endl;
				std::cout << "4 is at place : ";
				std::cout << easyfind(tab, 4) << std::endl;
				std::cout << "0 is at place : ";
				std::cout << easyfind(tab, 0) << std::endl;
				std::cout << "7 is at place : ";
				std::cout << easyfind(tab, 7) << std::endl;
			}
			catch (const std::exception& e)
			{ std::cerr << e.what() << std::endl; }
		}
		std::cout << std::endl;
		std::cout << "\t\e[91m---EASYFIND---\e[39m" << std::endl << std::endl;

	}
	std::cout << std::endl;
	std::cout << "\t\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
