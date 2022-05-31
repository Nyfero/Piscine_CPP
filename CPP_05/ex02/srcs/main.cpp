# include "../class/Bureaucrat.hpp"
# include "../class/A_Form.hpp"
# include "../class/ShrubberyCreationForm.hpp"
# include "../class/RobotomyRequestForm.hpp"
# include "../class/PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		std::cout << "\e[93mShrubbery\e[39m" << std::endl;
		std::cout << std::endl;
		
		try
		{
			ShrubberyCreationForm	a("test");
			Bureaucrat				boss("boss", 1);
			std::cout << std::endl;
		
			boss.signForm(a);
			std::cout << std::endl;
			boss.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		std::cout << std::endl;
		std::cout << "\e[93mRobotomy\e[39m" << std::endl;
		std::cout << std::endl;
		
		try
		{
			RobotomyRequestForm	a("test");
			Bureaucrat			boss("boss", 1);
			std::cout << std::endl;
		
			boss.signForm(a);
			std::cout << std::endl;
			boss.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		std::cout << std::endl;
		std::cout << "\e[93mPresidential\e[39m" << std::endl;
		std::cout << std::endl;
		
		try
		{
			PresidentialPardonForm	a("test");
			Bureaucrat				boss("boss", 1);
			std::cout << std::endl;
		
			boss.signForm(a);
			std::cout << std::endl;
			boss.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
