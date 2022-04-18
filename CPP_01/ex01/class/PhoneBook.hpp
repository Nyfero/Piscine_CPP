#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class PhoneBook
{
	public:
		PhoneBook();
		void	add(int index);
		void	search();
		~PhoneBook();

	private:
		Contact	m_contact[8];
};

#endif
