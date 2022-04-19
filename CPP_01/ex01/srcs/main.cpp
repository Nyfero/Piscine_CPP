#include "../class/Contact.hpp"
#include "../class/PhoneBook.hpp"

#include <string>
#include <iostream>

void	header(void)
{
	std::cout<< std::endl;
	std::cout << "	\e[34m/****************************************/" << std::endl;
	std::cout << "	/*		\e[91mPhoneBook\e[34m		*/" << std::endl;
	std::cout << "	/****************************************/\e[39m" << std::endl;
	std::cout << std::endl << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
}

int main(void)
{
	PhoneBook	phonebook;
	int			index;
	std::string	input;

	index = 0;
	header();
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
		{
			phonebook.add(index);
			if (phonebook.get_nb_contact() < 8)
				phonebook.add_contact();
			index++;
			if (index == 8)
				index = 0;	
		}
		if (input == "SEARCH")
			phonebook.search();
		if (input == "EXIT")
		{
			std::cout << "\e[92mSelf destruction !\e[39m" << std::endl;
			return (0);
		}
		std::cout << std::endl << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
	}
	std::cout << std::endl << "\e[91mEOF !\e[39m" << std::endl;
	return (0);
}
