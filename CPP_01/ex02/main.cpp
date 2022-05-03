#include <iostream>
#include <string>

int	main(void)
{	
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << std::endl;
	std::cout << "\e[92m---MEMORY ADDRESS---\e[39m" << std::endl << std::endl;
	
	std::cout << "string: " << &string << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;
	
	std::cout << std::endl;
	std::cout << "\e[92m---VALUE---\e[39m" << std::endl << std::endl;
	
	std::cout << "string: " << string << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	
	std::cout << std::endl;
	std::cout << "\e[92m---END---\e[39m" << std::endl;
	return (0);
}
