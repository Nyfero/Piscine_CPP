# include "../class/Bureaucrat.hpp"
# include "../class/Form.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		Form		declaration("Déclaration d'impôts", 15, 40);
		Form		nuclear("Attaque Nucléaire", 1, 1);
		
		Bureaucrat	boss("boss", 1);
		Bureaucrat	stagiaire("stagiaire", 150);
		
		std::cout << std::endl;
		try
		{
			std::cout << "\e[93m" << boss << "\e[39m" << std::endl;
			declaration.beSigned(boss);
		}
		catch (const std::exception& e)
		{
			std::cerr << "To low level: " << e.what() << std::endl;
		}
		std::cout << "\e[93m" << declaration << "\e[39m" << std::endl << std::endl;
		
		try
		{
			std::cout << "\e[93m" << stagiaire << "\e[39m" << std::endl;
			nuclear.beSigned(stagiaire);
		}
		catch (const std::exception& e)
		{
			std::cerr << "To low level: " << e.what() << std::endl;
		}
		std::cout << "\e[93m" << nuclear << "\e[39m" << std::endl << std::endl;
		
		try
		{
			boss.signForm(declaration);
			boss.signForm(nuclear);
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		std::cout << std::endl;
		
		try
		{
			stagiaire.signForm(declaration);
			stagiaire.signForm(nuclear);
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
