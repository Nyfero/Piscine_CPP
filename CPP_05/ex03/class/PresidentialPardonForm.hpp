#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "A_Form.hpp"
# include <string>
# include <iostream>

class PresidentialPardonForm : public A_Form
{
	private:
		std::string	m_target;

	public:
		PresidentialPardonForm(std::string a_target);
		PresidentialPardonForm(PresidentialPardonForm const& src);
		PresidentialPardonForm & operator=(PresidentialPardonForm const& src);
		~PresidentialPardonForm();
	
		virtual void	execute(Bureaucrat const& executor) const;
		std::string		GetTarget() const;
};

std::ostream & operator << (std::ostream &out, const PresidentialPardonForm &c);
#endif
