#include "../inc/replace.h"

int	error_arg(void)
{
	std::cout << "\e[91m---ERROR---\e[39m" << std::endl;
	std::cout << "This program MUST take 3 parameters in the following order:" << std::endl;
	std::cout << "\t(1)- a filename" << std::endl;
	std::cout << "\t(2)- a string" << std::endl;
	std::cout << "\t(3)- a string" << std::endl << std::endl;
	std::cout << "This program will open the file (1) and copies its content into a new file '(1).replace', replacing every occurrence of (2) with (3)." << std::endl;
	return (1);
}

int	error_file(void)
{
	std::cout << "\e[91m---ERROR---\e[39m" << std::endl;
	std::cout << "Unable to open file" << std::endl;
	return (1);
}
