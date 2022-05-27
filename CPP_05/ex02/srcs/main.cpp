# include "../class/Bureaucrat.hpp"
# include "../class/A_Form.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		A_Form		declaration("Déclaration d'impôts", 15, 40);
		A_Form		nuclear("Attaque Nucléaire", 1, 1);
		
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
		
		boss.signForm(declaration);
		boss.signForm(nuclear);
		std::cout << std::endl;
		stagiaire.signForm(declaration);
		stagiaire.signForm(nuclear);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
