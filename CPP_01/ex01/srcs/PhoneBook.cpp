#include "../class/PhoneBook.hpp"

PhoneBook::PhoneBook(): m_contact()
{ m_nb_contact = 0; }

PhoneBook::~PhoneBook()
{}

int		PhoneBook::get_nb_contact() const
{ return (m_nb_contact); }

void	PhoneBook::add_contact()
{ m_nb_contact++; }

void	PhoneBook::add(int index)
{
	std::string	tmp;

	std::cout << "\e[92m";
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
	std::cout << "\e[39m";
}

void	PhoneBook::search()
{
	int			i = 0;
	int			nb_contact;
	std::string	tmp;
	int			index;

	nb_contact = get_nb_contact();
	if (nb_contact == 0)
	{
		std::cout << std::endl << "\e[91m***No contact register***\e[39m" << std::endl;
		return ;
	}
	std::cout << "\e[92m";
	std::cout << "*******************CONTACT*******************" << std::endl;
	std::cout << "*" << std::setfill(' ') << std::setw(10) << "INDEX" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "NICKNAME" << "*" << std::endl;
	while (i < nb_contact)
	{
		std::cout << "*" << std::setfill(' ') << std::setw(10) << i + 1 << "|";
		std::cout << std::setfill(' ') << std::setw(10) << m_contact[i].get_first_name() << "|";
		std::cout << std::setfill(' ') << std::setw(10) << m_contact[i].get_last_name() << "|";
		std::cout << std::setfill(' ') << std::setw(10) << m_contact[i].get_nickname() << "*" << std::endl;
		i++;
	}
	std::cout << "*********************************************" << std::endl;
	std::cout << "\e[39m";
	index = 9;
	std::cout << std::endl << "Enter an index to see more detail: ";
	while (index > nb_contact || index < 0)
	{
		std::cin >> index;
		if (index > nb_contact || index < 0)
			std::cout << "\e[93mIndex not found, pls try again: \e[39m" << std::endl;
		else
			m_contact[index - 1].disp_contact();
	}
}
