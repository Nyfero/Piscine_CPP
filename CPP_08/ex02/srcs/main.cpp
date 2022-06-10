# include "../class/Span.hpp"

int main( void )
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		std::cout << std::endl;
		std::cout << "\t\e[91m---PROVIDED-MAIN---\e[39m" << std::endl << std::endl;
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		std::cout << std::endl;
		std::cout << "\t\e[93m---PROVIDED-MAIN---\e[39m" << std::endl << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[91m---CUSTOM-MAIN---\e[39m" << std::endl << std::endl;
		{
			std::cout << std::endl;
			std::cout << "\e[96m*To much add*\e[39m" << std::endl << std::endl;
			{
				try
				{
					Span	sp = Span(2);
		
					sp.addNumber(0);
					sp.addNumber(1);
					sp.addNumber(2);
					sp.addNumber(3);
				}
				catch (const std::exception& e)
				{	std::cerr << e.what() << std::endl; }
			}
		
			std::cout << std::endl;
			std::cout << "\e[96m*Span empty*\e[39m" << std::endl << std::endl;
			{
				std::cout << "shortestSpan" << std::endl;
				{
					try
					{
						Span	sp = Span(0);
		
						sp.shortestSpan();
					}
					catch (const std::exception& e)
					{	std::cerr << e.what() << std::endl; }
				}
		
				std::cout << std::endl;
				std::cout << "longestSpan" << std::endl;
				{
					try
					{
						Span	sp = Span(0);
		
						sp.longestSpan();
					}
					catch (const std::exception& e)
					{	std::cerr << e.what() << std::endl; }
				}
			}
		
			std::cout << std::endl;
			std::cout << "\e[96m*Span size 1*\e[39m" << std::endl << std::endl;
			{
				std::cout << "shortestSpan" << std::endl;
				{
					try
					{
						Span	sp = Span(1);
		
						sp.addNumber(0);
						sp.shortestSpan();
					}
					catch (const std::exception& e)
					{	std::cerr << e.what() << std::endl; }
				}
		
				std::cout << std::endl;
				std::cout << "longestSpan" << std::endl;
				{
					try
					{
						Span	sp = Span(1);
		
						sp.addNumber(0);
						sp.longestSpan();
					}
					catch (const std::exception& e)
					{	std::cerr << e.what() << std::endl; }
				}
			}
			
			std::cout << std::endl;
			std::cout << "\e[96m*Span size 10,000*\e[39m" << std::endl << std::endl;
			{
				try
				{
					Span	sp = Span(10000);
				
					sp.addRange(10000);
					std::cout << "shortestSpan" << std::endl;
					std::cout << sp.shortestSpan() << std::endl;
					std::cout << "longestSpan" <<  std::endl;
					std::cout << sp.longestSpan() << std::endl;
				}
				catch (const std::exception& e)
				{	std::cerr << e.what() << std::endl; }
			}
			
			std::cout << std::endl;
			std::cout << "\e[96m*Span size 6*\e[39m" << std::endl << std::endl;
			{
				try
				{
					Span	sp = Span(6);
					std::vector<int>	tab;
					
					tab.push_back(-42);
					tab.push_back(0);
					tab.push_back(754);
					tab.push_back(16576);
					tab.push_back(47852);
					tab.push_back(100000);
	
					sp.addList(tab);
					std::cout << "shortestSpan" << std::endl;
					std::cout << sp.shortestSpan() << std::endl;
					std::cout << "longestSpan" <<  std::endl;
					std::cout << sp.longestSpan() << std::endl;
				}
				catch (const std::exception& e)
				{	std::cerr << e.what() << std::endl; }
			}
		}
		std::cout << std::endl;
		std::cout << "\t\e[93m---PROVIDED-MAIN---\e[39m" << std::endl << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\t\e[93m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
