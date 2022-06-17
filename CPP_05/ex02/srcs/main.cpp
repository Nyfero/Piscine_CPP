# include "../class/Bureaucrat.hpp"
# include "../class/A_Form.hpp"
# include "../class/ShrubberyCreationForm.hpp"
# include "../class/RobotomyRequestForm.hpp"
# include "../class/PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		//----------------------------------------------------//
		std::cout << "\t\e[93mShrubbery\e[39m" << std::endl << std::endl;
		//----------------------------------------------------//
		
		std::cout << "\e[96mBoss; grade: 1\e[39m" << std::endl;
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
		std::cout << "\e[96mStagiaire; grade: 150\e[39m" << std::endl;
		try
		{
			ShrubberyCreationForm	a("test");
			Bureaucrat				stagiaire("stagiaire", 150);
			std::cout << std::endl;
			
			stagiaire.signForm(a);
			std::cout << std::endl;
			stagiaire.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		std::cout << std::endl;
		std::cout << "\e[96mNoExec; grade: 140\e[39m" << std::endl;
		try
		{
			ShrubberyCreationForm	a("test");
			Bureaucrat				noExec("noExec", 140);
			std::cout << std::endl;
			
			noExec.signForm(a);
			std::cout << std::endl;
			noExec.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		std::cout << std::endl;
		std::cout << "\e[96mNotSigned; grade: 1\e[39m" << std::endl;
		try
		{
			ShrubberyCreationForm	a("test");
			Bureaucrat				notSigned("notSigned", 1);
			std::cout << std::endl;
			
			notSigned.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		//----------------------------------------------------//
		std::cout << std::endl << "\t\e[93mRobotomy\e[39m" << std::endl << std::endl;
		//----------------------------------------------------//
		
		std::cout << "\e[96mBoss; grade: 1\e[39m" << std::endl;
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
		std::cout << "\e[96mStagiaire; grade: 150\e[39m" << std::endl;
		try
		{
			RobotomyRequestForm	a("test");
			Bureaucrat			stagiaire("stagiaire", 150);
			std::cout << std::endl;
			
			stagiaire.signForm(a);
			std::cout << std::endl;
			stagiaire.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		std::cout << std::endl;
		std::cout << "\e[96mNoExec; grade: 50\e[39m" << std::endl;
		try
		{
			RobotomyRequestForm	a("test");
			Bureaucrat			noExec("noExec", 50);
			std::cout << std::endl;
			
			noExec.signForm(a);
			std::cout << std::endl;
			noExec.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		std::cout << std::endl;
		std::cout << "\e[96mNotSigned; grade: 1\e[39m" << std::endl;
		try
		{
			RobotomyRequestForm	a("test");
			Bureaucrat			notSigned("notSigned", 1);
			std::cout << std::endl;
			
			notSigned.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		//----------------------------------------------------//
		std::cout << std::endl << "\t\e[93mPresidential\e[39m" << std::endl << std::endl;
		//----------------------------------------------------//
		
		std::cout << "\e[96mBoss; grade: 1\e[39m" << std::endl;
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
		
		std::cout << std::endl;
		std::cout << "\e[96mStagiaire; grade: 150\e[39m" << std::endl;
		try
		{
			PresidentialPardonForm	a("test");
			Bureaucrat				stagiaire("stagiaire", 150);
			std::cout << std::endl;
			
			stagiaire.signForm(a);
			std::cout << std::endl;
			stagiaire.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		std::cout << std::endl;
		std::cout << "\e[96mNoExec; grade: 10\e[39m" << std::endl;
		try
		{
			PresidentialPardonForm	a("test");
			Bureaucrat				noExec("noExec", 10);
			std::cout << std::endl;
			
			noExec.signForm(a);
			std::cout << std::endl;
			noExec.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		
		std::cout << std::endl;
		std::cout << "\e[96mNotSigned; grade: 1\e[39m" << std::endl;
		try
		{
			PresidentialPardonForm	a("test");
			Bureaucrat				notSigned("notSigned", 1);
			std::cout << std::endl;
			
			notSigned.executeForm(a);
			std::cout << std::endl;
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
	}
	std::cout << std::endl;
	std::cout << "\t\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
