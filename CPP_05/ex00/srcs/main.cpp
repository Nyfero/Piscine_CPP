# include "../class/Bureaucrat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		std::cout << std::endl;
		std::cout << "\t\e[92m---INIT---\e[39m" << std::endl << std::endl;
		{
			std::cout << "\e[96mBoss rank 1\e[39m" << std::endl;
			try
			{
				Bureaucrat	boss("boss", 1);
				std::cout << boss.GetName() << ": " << boss.GetGrade() << std::endl;
				std::cout << "\e[93m" << boss << "\e[39m" << std::endl;
			}
			catch (const std::exception& e)
			{ std::cerr << e.what() << std::endl; }
			
			std::cout << std::endl << "\e[96mmafieux rank 150\e[39m" << std::endl;
			try
			{
				Bureaucrat	mafieux("mafieux", 150);
				std::cout << mafieux.GetName() << ": " << mafieux.GetGrade() << std::endl;
				std::cout << "\e[93m" << mafieux << "\e[39m" << std::endl;
			}
			catch (const std::exception& e)
			{ std::cerr << e.what() << std::endl; }
			
			std::cout << std::endl << "\e[96mGradeToLowException (rank 151)\e[39m" << std::endl;
			try
			{
				Bureaucrat	erreurlow("erreurlow", 151);
				std::cout << erreurlow.GetName() << ": " << erreurlow.GetGrade() << std::endl;
				std::cout << "\e[93m" << erreurlow << "\e[39m" << std::endl;
			}
			catch (const std::exception& e)
			{ std::cerr << e.what() << std::endl; }
			
			std::cout << std::endl << "\e[96mGradeToHighException (rank 0)\e[39m" << std::endl;
			try
			{
				Bureaucrat	erreurtop("erreurtop", 0);
				std::cout << erreurtop.GetName() << ": " << erreurtop.GetGrade() << std::endl;
				std::cout << "\e[93m" << erreurtop << "\e[39m" << std::endl;
			}
			catch (const std::exception& e)
			{ std::cerr << e.what() << std::endl; }
		}
		std::cout << std::endl;
		std::cout << "\t\e[91m---INIT---\e[39m" << std::endl << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[92m---Promote/Demote---\e[39m" << std::endl << std::endl;
		{
			std::cout << "\e[96mBoss rank 1\e[39m" << std::endl;
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
			{ std::cerr << e.what() << std::endl; }
			
			std::cout << std::endl << "\e[96mmafieux rank 150\e[39m" << std::endl;
			try
			{
				Bureaucrat	mafieux("mafieux", 150);
				std::cout << mafieux.GetName() << ": " << mafieux.GetGrade() << std::endl;
				std::cout << "\e[93m" << mafieux << "\e[39m" << std::endl;
				mafieux.PromoteGrade();
				std::cout << mafieux.GetName() << ": " << mafieux.GetGrade() << std::endl;
				mafieux.DemoteGrade();
				std::cout << mafieux.GetName() << ": " << mafieux.GetGrade() << std::endl;
				mafieux.DemoteGrade();
				std::cout << mafieux.GetName() << ": " << mafieux.GetGrade() << std::endl;
			}
			catch (const std::exception& e)
			{ std::cerr << e.what() << std::endl; }
		}
		std::cout << std::endl;
		std::cout << "\t\e[91m---Promote/Demote---\e[39m" << std::endl << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	
	return (0);
}
