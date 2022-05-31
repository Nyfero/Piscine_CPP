# include "../class/Bureaucrat.hpp"
# include "../class/A_Form.hpp"
# include "../class/ShrubberyCreationForm.hpp"
# include "../class/RobotomyRequestForm.hpp"
# include "../class/PresidentialPardonForm.hpp"
# include "../class/Intern.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		Intern	a;
		
		std::cout << std::endl;
		std::cout << "shrubbery" << std::endl;
		a.makeForm("shrubbery creation", "test");
		std::cout << std::endl << "robotomy" << std::endl;
		a.makeForm("robotomy request", "test");
		std::cout << std::endl << "presidential" << std::endl;
		a.makeForm("presidential pardon", "test");
		std::cout << std::endl << "nothing" << std::endl;
		a.makeForm("nothing", "test");
		std::cout << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---TEST---\e[39m" << std::endl;
		try
		{
			Bureaucrat	boss("boss", 1);
			A_Form	*rrf;
			
			std::cout << std::endl;
			rrf = a.makeForm("shrubbery creation", "test");
			std::cout << std::endl;
			boss.signForm(*rrf);
			std::cout << std::endl;
			boss.executeForm(*rrf);
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		std::cout << "\t\e[91m---TEST---\e[39m" << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
