#include "../class/Contact.hpp"
#include "../class/PhoneBook.hpp"

#include <string>
#include <iostream>

int main(void)
{
	PhoneBook	phonebook;
	int			index;
	std::string	input;

	index = 0;
	std::cout<< std::endl;
	std::cout << "	\e[34m/****************************************/" << std::endl;
	std::cout << "	/*		\e[91mPhoneBook\e[34m		*/" << std::endl;
	std::cout << "	/****************************************/\e[39m" << std::endl;
	std::cout << std::endl << "\e[93mEnter a command (ADD, SEARCH, EXIT):" << std::endl;
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
		{
			std::cout << "\e[92m";
			phonebook.add(index);
			index++;
			if (index == 8)
				index = 0;
			std::cout << std::endl << "\e[93mEnter a command (ADD, SEARCH, EXIT):" << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout << "\e[92m";
			phonebook.search();
			std::cout << std::endl << "\e[93mEnter a command (ADD, SEARCH, EXIT):" << std::endl;
		}
		else if (input == "EXIT")
		{
			std::cout << "\e[92mGoodbye !\e[39m" << std::endl;
			return (0);
		}
		else
			std::cout << std::endl << "\e[91mEnter a command (ADD, SEARCH, EXIT):" << std::endl;
		
	}
	std::cout << std::endl << "\e[91mEOF !\e[39m" << std::endl;
	return (0);
}
