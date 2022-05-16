#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <stdlib.h>

void	safeGetLine(std::string &input);

class PhoneBook
{
	public:
		PhoneBook();
		void	add();
		void	search();
		int		disp_register();
		int		end();
		~PhoneBook();

	private:
		Contact	m_contact[8];
		int		m_nb_contact;
		int		m_index;
};

#endif
