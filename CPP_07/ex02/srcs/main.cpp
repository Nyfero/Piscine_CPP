#include "../class/Array.hpp"
#define TYPE int

int main()
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		std::cout << "\t\e[93m---CONSTUCTOR-TEST---\e[39m" << std::endl << std::endl;
		{
			std::cout << "empty" << std::endl;
			Array<TYPE>	empty;
			std::cout << "Size of empty: " << empty.size() << std::endl;
			
			std::cout << "four" << std::endl;
			Array<TYPE>	four(4);
			std::cout << "Size of four: " << four.size() << std::endl;
			
			std::cout << "copy" << std::endl;
			Array<TYPE>	copy(four);
			std::cout << "Size of copy: " << copy.size() << std::endl;
			
			std::cout << "assignement" << std::endl;
			Array<TYPE>	assignement;
			assignement = empty;
			std::cout << "Size of assignement: " << assignement.size() << std::endl;
		}
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---GET-ELEMENT---\e[39m" << std::endl << std::endl;
		{
			Array<TYPE>	empty;
			Array<TYPE>	five(5);
			
			try
			{
				std::cout << "Size of empty: " << empty.size() << std::endl;
				std::cout << empty[0] << std::endl;
			}
			catch (const std::exception& e)
			{ std::cerr << e.what() << std::endl; }
			std::cout << std::endl;
			
			try
			{
				std::cout << "Size of five: " << five.size() << std::endl;
				five[0] = 42;
				five[1] = 58;
				five[2] = 6;
				five[3] = 126;
				five[4] = 'c';
				for(unsigned int i = 0; i < 6; i++)
					std::cout << five[i] << std::endl;
			}
			catch (const std::exception& e)
			{ std::cerr << e.what() << std::endl; }
			std::cout << std::endl;
		}
	}
	std::cout << "\t\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
