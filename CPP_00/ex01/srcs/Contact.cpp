#include "../class/Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void		Contact::set_first_name(std::string afirst_name)
{ m_first_name = afirst_name; }

void		Contact::set_last_name(std::string alast_name)
{ m_last_name = alast_name; }

void		Contact::set_nickname(std::string anickname)
{ m_nickname = anickname; }

void		Contact::set_phone_number(std::string aphone_number)
{ m_phone_number = aphone_number; }

void		Contact::set_secret(std::string adarkest_secret)
{ m_darkest_secret = adarkest_secret; }

std::string	Contact::get_first_name()
{
	if (m_first_name.size() >= 10)
	{
		std::string	tmp(m_first_name);
		tmp = tmp.substr(0, 9) + ".";
		return (tmp);
	}
	return (m_first_name);
}

std::string	Contact::get_last_name()
{
	if (m_last_name.size() >= 10)
	{
		std::string	tmp(m_last_name);
		tmp = tmp.substr(0, 9) + ".";
		return (tmp);
	}
	return (m_last_name);
}

std::string	Contact::get_nickname()
{
	if (m_nickname.size() >= 10)
	{
		std::string	tmp(m_nickname);
		tmp = tmp.substr(0, 9) + ".";
		return (tmp);
	}
	return (m_nickname);
}

void		Contact::disp_contact() const
{
	std::cout << "\e[92m";
	std::cout << "First name: " << m_first_name << std::endl;
	std::cout << "Last name: " << m_last_name << std::endl;
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Phone number: " << m_phone_number << std::endl;
	std::cout << "Darkest secret: " << m_darkest_secret << std::endl;
	std::cout << "\e[39m";
}
