#ifndef INTERN_HPP
# define INTERN_HPP

# include "A_Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>
# include <iostream>

class Intern
{
	private:
		A_Form	*Shrubberry(std::string target);
		A_Form	*Robotomy(std::string target);
		A_Form	*Presidential(std::string target);
		
	public:
		//Constructors
		Intern();
		Intern(Intern const& src);
		Intern & operator=(Intern const& src);
		~Intern();
		
		//Functions
		A_Form	*makeForm(std::string nameForm, std::string target);
};

#endif
