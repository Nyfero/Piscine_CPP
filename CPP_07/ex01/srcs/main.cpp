# include "../class/iter.hpp"

int main( void )
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		int		itab[] = {0, 1, 2, 3, 4};
		float	ftab[] = {0.0f, 15.5f, 3.8f, 6.4f, 42.42f};
		char	str[] = "salut";
		
		std::cout << "\t\e[93m---Display tab---\e[39m" << std::endl;
		{
			std::cout << std::endl;
			std::cout << "\e[34m---INT---\e[39m" << std::endl;
			{
				std::cout << std::endl;
				std::cout << "\e[92mDisplay all\e[39m" << std::endl;
				iter(itab, 5, displayTab);
				
				std::cout << std::endl;
				std::cout << "\e[92mDisplay 2\e[39m" << std::endl;
				iter(itab, 2, displayTab);
			}
			
			std::cout << std::endl;
			std::cout << "\e[34m---FLOAT---\e[39m" << std::endl;
			{
				std::cout << std::endl;
				std::cout << "\e[92mDisplay all\e[39m" << std::endl;
				iter(ftab, 5, displayTab);
				
				std::cout << std::endl;
				std::cout << "\e[92mDisplay 2\e[39m" << std::endl;
				iter(ftab, 2, displayTab);
			}
			
			std::cout << std::endl;
			std::cout << "\e[34m---CHAR---\e[39m" << std::endl;
			{
				std::cout << std::endl;
				std::cout << "\e[92mDisplay all\e[39m" << std::endl;
				iter(str, 5, displayTab);
				
				std::cout << std::endl;
				std::cout << "\e[92mDisplay 2\e[39m" << std::endl;
				iter(str, 2, displayTab);
			}
		}
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---ADD 5---\e[39m" << std::endl;
		{
			std::cout << std::endl;
			std::cout << "\e[34m---INT---\e[39m" << std::endl;
			{
				iter(itab, 5, addFive);
				iter(itab, 5, displayTab);
			}
			
			std::cout << std::endl;
			std::cout << "\e[34m---FLOAT---\e[39m" << std::endl;
			{
				iter(ftab, 5, addFive);
				iter(ftab, 5, displayTab);
			}
			
			std::cout << std::endl;
			std::cout << "\e[34m---CHAR---\e[39m" << std::endl;
			{
				iter(str, 5, addFive);
				iter(str, 5, displayTab);
			}
		}
	}
	std::cout << "\t\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
