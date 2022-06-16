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
		//Constructors
		RobotomyRequestForm(std::string a_target);
		RobotomyRequestForm(RobotomyRequestForm const& src);
		RobotomyRequestForm & operator=(RobotomyRequestForm const& src);
		virtual ~RobotomyRequestForm();
	
		//Functions
		virtual void	execute(Bureaucrat const& executor) const;
		std::string		GetTarget() const;
};

//Display
std::ostream & operator << (std::ostream &out, const RobotomyRequestForm &c);
#endif
