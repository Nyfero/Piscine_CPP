# include "../class/Bureaucrat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---INIT---\e[39m" << std::endl << std::endl;
	try
	{
		Bureaucrat	boss("boss", 1);
		std::cout << boss.GetName() << ": " << boss.GetGrade() << std::endl;
		std::cout << "\e[93m" << boss << "\e[39m" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat	stagiaire("stagiaire", 150);
		std::cout << stagiaire.GetName() << ": " << stagiaire.GetGrade() << std::endl;
		std::cout << "\e[93m" << stagiaire << "\e[39m" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat	erreurlow("erreurlow", 151);
		std::cout << erreurlow.GetName() << ": " << erreurlow.GetGrade() << std::endl;
		std::cout << "\e[93m" << erreurlow << "\e[39m" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat	erreurtop("erreurtop", 0);
		std::cout << erreurtop.GetName() << ": " << erreurtop.GetGrade() << std::endl;
		std::cout << "\e[93m" << erreurtop << "\e[39m" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---INIT---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\e[92m---Promote/Demote---\e[39m" << std::endl << std::endl;
	try
	{
		Bureaucrat	boss("boss", 1);
		std::cout << boss.GetName() << ": " << boss.GetGrade() << std::endl;
		std::cout << "\e[93m" << boss << "\e[39m" << std::endl;
		boss.DemoteGrade();
		std::cout << boss.GetName() << ": " << boss.GetGrade() << std::endl;
		boss.PromoteGrade();
		std::cout << boss.GetName() << ": " << boss.GetGrade() << std::endl;
		boss.PromoteGrade();
		std::cout << boss.GetName() << ": " << boss.GetGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	stagiaire("stagiaire", 150);
		std::cout << stagiaire.GetName() << ": " << stagiaire.GetGrade() << std::endl;
		std::cout << "\e[93m" << stagiaire << "\e[39m" << std::endl;
		stagiaire.PromoteGrade();
		std::cout << stagiaire.GetName() << ": " << stagiaire.GetGrade() << std::endl;
		stagiaire.DemoteGrade();
		std::cout << stagiaire.GetName() << ": " << stagiaire.GetGrade() << std::endl;
		stagiaire.DemoteGrade();
		std::cout << stagiaire.GetName() << ": " << stagiaire.GetGrade() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "\t\e[91m---Promote/Demote---\e[39m" << std::endl << std::endl;
	
	
	return (0);
}
