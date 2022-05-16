#include "../class/Contact.hpp"
#include "../class/PhoneBook.hpp"

void	header(void)
{
	std::cout<< std::endl;
	std::cout << "	\e[34m/****************************************/" << std::endl;
	std::cout << "	/*		\e[91mPhoneBook\e[34m		*/" << std::endl;
	std::cout << "	/****************************************/\e[39m" << std::endl;
	std::cout << std::endl << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
}

void	disp_prompt(std::string input)
{
	if (input != "SEARCH" && input != "ADD")
	{
		std::cout << std::endl
			<< "\e[91mEnter a command (ADD, SEARCH, EXIT):\e[39m"
				<< std::endl;
	}
	else
	{
		std::cout << std::endl
			<< "Enter a command (ADD, SEARCH, EXIT):"
				<< std::endl;
	}
}

void safeGetLine(std::string &input)
{
	std::getline(std::cin, input);
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << std::endl << "\e[91mEOF !\e[39m" << std::endl;
		exit(EXIT_FAILURE);
	}
	else if (input.empty())
	{
		std::cout << "Empty line, please enter a value:" << std::endl;
		safeGetLine(input);
	}
}

int main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	header();
	while (1)
	{
		safeGetLine(input);
		if (input == "ADD")
			phonebook.add();
		if (input == "SEARCH")
			phonebook.search();
		if (input == "EXIT")
			phonebook.end();
		disp_prompt(input);
	}
	return (0);
}
