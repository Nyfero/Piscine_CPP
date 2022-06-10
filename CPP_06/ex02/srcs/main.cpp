#include "../class/Base.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		Base	*ptr;

		ptr = generate();
		std::cout << "Generate done" << std::endl;
		std::cout << std::endl;

		std::cout << "Identify by Pointer" << std::endl;
		identify(ptr);
		std::cout << std::endl;

		std::cout << "Identify by Reference" << std::endl;
		identify(*ptr);
		std::cout << std::endl;
	}
	std::cout << "\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
