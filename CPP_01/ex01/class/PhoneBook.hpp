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
		int		get_nb_contact() const;
		void	add_contact();
		~PhoneBook();

	private:
		Contact	m_contact[8];
		int		m_nb_contact;
};

#endif
