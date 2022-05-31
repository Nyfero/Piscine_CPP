#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "A_Form.hpp"
# include <string>
# include <iostream>
# include <time.h>
# include <stdlib.h>

class RobotomyRequestForm : public A_Form
{
	private:
		std::string	m_target;

	public:
		RobotomyRequestForm(std::string a_target);
		RobotomyRequestForm(RobotomyRequestForm const& src);
		RobotomyRequestForm & operator=(RobotomyRequestForm const& src);
		~RobotomyRequestForm();
	
		virtual void	execute(Bureaucrat const& executor) const;
		std::string		GetTarget() const;
};

std::ostream & operator << (std::ostream &out, const RobotomyRequestForm &c);
#endif
