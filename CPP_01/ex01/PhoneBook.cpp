#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): m_contact()
{
	m_nb_contact = 0; 
	m_index = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add()
{
	std::string	tmp;

	std::cout << "\e[92m";
	std::cout << "First name: ";
	safeGetLine(tmp);
	m_contact[m_index].set_first_name(tmp);
	std::cout << "Last name: ";
	safeGetLine(tmp);
	m_contact[m_index].set_last_name(tmp);
	std::cout << "Nickname: ";
	safeGetLine(tmp);
	m_contact[m_index].set_nickname(tmp);
	std::cout << "Phone number: ";
	safeGetLine(tmp);
	m_contact[m_index].set_phone_number(tmp);
	std::cout << "Darkest secret: ";
	safeGetLine(tmp);
	m_contact[m_index].set_secret(tmp);
	std::cout << "\e[39m";
	m_index++;
	if (m_index == 8)
		m_index = 0;
	if (m_nb_contact < 8)
		m_nb_contact++;
}

int	PhoneBook::disp_register()
{
	int	i = 0;

	if (m_nb_contact == 0)
	{
		std::cout << std::endl << "\e[91m***No contact registed***\e[39m" << std::endl;
		return (1);
	}
	std::cout << "\e[92m";
	std::cout << "********************CONTACT********************" << std::endl;
	std::cout << "*|" << std::setfill(' ') << std::setw(10) << "INDEX" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setfill(' ') << std::setw(10) << "NICKNAME" << "|*" << std::endl;
	while (i < m_nb_contact)
	{
		std::cout << "*|" << std::setfill(' ') << std::setw(10) << i + 1 << "|";
		std::cout << std::setfill(' ') << std::setw(10) << m_contact[i].get_first_name() << "|";
		std::cout << std::setfill(' ') << std::setw(10) << m_contact[i].get_last_name() << "|";
		std::cout << std::setfill(' ') << std::setw(10) << m_contact[i].get_nickname() << "|*" << std::endl;
		i++;
	}
	std::cout << "***********************************************" << std::endl;
	std::cout << "\e[39m";
	return (0);
}

int	check_int(std::string str)
{
	int i = -1;
	while (str[++i])
		if (str[i] < '0' && str[i] > '9')
			return (0);
	return (1);
}

void	PhoneBook::search()
{
	std::string	tmp;

	if (disp_register())
		return ;
	std::cout << std::endl << "Enter an index to see more detail: ";
	safeGetLine(tmp);
	while (!(check_int(tmp)) && (atoi(tmp.c_str()) < 1 || atoi(tmp.c_str()) > m_nb_contact + 1))
	{
		std::cout << "\e[93mIndex " << tmp << " doesn't exist, pls try again: \e[39m";
		safeGetLine(tmp);
	}
	if (atoi(tmp.c_str()) >= 1 && atoi(tmp.c_str()) <= m_nb_contact)
		m_contact[atoi(tmp.c_str()) - 1].disp_contact();
	else
		std::cout << "\e[93mIndex " << tmp << " doesn't exist !\e[39m";
}

int	PhoneBook::end()
{
	std::cout << "\e[91mSelf destruction !\e[39m" << std::endl;
	exit(0);
}
