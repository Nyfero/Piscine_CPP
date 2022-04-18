#include "../class/PhoneBook.hpp"

PhoneBook::PhoneBook(): m_contact()
{}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add(int index)
{
	std::string	tmp;

	std::cout << "First name: ";
	std::getline(std::cin, tmp);
	m_contact[index].set_first_name(tmp);
	std::cout << "Last name: ";
	std::getline(std::cin, tmp);
	m_contact[index].set_last_name(tmp);
	std::cout << "Nickname: ";
	std::getline(std::cin, tmp);
	m_contact[index].set_nickname(tmp);
	std::cout << "Phone number: ";
	std::getline(std::cin, tmp);
	m_contact[index].set_phone_number(tmp);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, tmp);
	m_contact[index].set_secret(tmp);
}

void	PhoneBook::search()
{
	int	i = 0;
	
	std::cout << "//---			--Contact--			---\\\\" << std::endl;
	std::cout << "||							||"<< std::endl;
	std::cout << "||" << std::setfill(' ') << std::setw(10);
	std::cout << "INDEX" << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "FIRST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "LAST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "NICKNAME" << "||" << std::endl;
	while (i < 8)
	{
		std::cout << "||							   ||"<< std::endl;
		std::cout << "|| index: "<< i + 1 << " | ";
		std::cout << "first name: " << m_contact[i].get_first_name() << " | ";
		std::cout << "last name: " << m_contact[i].get_last_name() << " | ";
		std::cout << "nickname: " << m_contact[i].get_nickname() << " ||" << std::endl;
		std::cout << "||							   ||"<< std::endl;
		i++;
	}
	std::cout << "\\\\---							---//" << std::endl;
}
