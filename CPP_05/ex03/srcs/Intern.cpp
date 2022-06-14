# include "../class/Intern.hpp"

//					//
//	Constructors	//
//					//

Intern::Intern() {
	std::cout << "Intern Constructor by default call" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern Destructor call" << std::endl;
}

Intern::Intern(Intern const& src) {
	(void)src;
	std::cout << "Intern Constructor by copy call" << std::endl;
}

Intern & Intern::operator=(Intern const& src) {
	(void)src;
	std::cout << "Intern Constructor by assignement call" << std::endl;
	return (*this);
}

//						//
//	Privates functions	//
//						//

A_Form	*Intern::Shrubberry(std::string target) {
	return (new ShrubberyCreationForm(target));
}

A_Form	*Intern::Robotomy(std::string target) {
	return (new RobotomyRequestForm(target));
}

A_Form	*Intern::Presidential(std::string target) {
	return (new PresidentialPardonForm(target));
}

//				//
//	Functions	//
//				//

A_Form	*Intern::makeForm(std::string nameForm, std::string target) {
	int		i = 0;
	std::string	str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	A_Form	*(Intern::*func[3])(std::string target) = {&Intern::Shrubberry, &Intern::Robotomy, &Intern::Presidential};
	
	while (i < 3)
	{
		if (nameForm == str[i])
		{
			std::cout << "Intern create " << nameForm << std::endl;
			return ((this->*func[i])(target));
		}
		i++;
	}
	std::cout << "Intern can't create " << nameForm << std::endl;
	return (NULL);
}
