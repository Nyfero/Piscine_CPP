#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact();
		void		set_first_name(std::string afirst_name);
		void		set_last_name(std::string alast_name);
		void		set_nickname(std::string anickname);
		void		set_phone_number(std::string aphone_number);
		void		set_secret(std::string adarkest_secret);
		std::string	get_first_name() const;
		std::string	get_last_name() const;
		std::string	get_nickname() const;
		std::string	get_phone_number() const;
		std::string	get_secret() const;
		~Contact();
		
	private:
		std::string	m_first_name;
		std::string	m_last_name;
		std::string	m_nickname;
		std::string	m_phone_number;
		std::string	m_darkest_secret;
};

#endif
