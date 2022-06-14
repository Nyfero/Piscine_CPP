# include "../class/MutantStack.hpp"

int main( void )
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		std::cout << std::endl;
		std::cout << "\t\e[91m---PROVIDED-MAIN---\e[39m" << std::endl << std::endl;
		{
			std::cout << std::endl;
			std::cout << "\e[96m*MutantStack*\e[39m" << std::endl << std::endl;
			{
				MutantStack<int> mstack;
				
				mstack.push(5);
				mstack.push(17);
				std::cout << mstack.top() << std::endl;
				mstack.pop();
				std::cout << mstack.size() << std::endl;
				mstack.push(3);
				mstack.push(5);
				mstack.push(737);
				//[...]
				mstack.push(0);
				MutantStack<int>::iterator it = mstack.begin();
				MutantStack<int>::iterator ite = mstack.end();
				++it;
				--it;
				while (it != ite)
				{
					std::cout << *it << std::endl;
					++it;
				}
				std::stack<int> s(mstack);
			}
		}
		std::cout << std::endl;
		std::cout << "\t\e[93m---PROVIDED-MAIN---\e[39m" << std::endl << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[91m---CUSTOM-MAIN---\e[39m" << std::endl << std::endl;
		{
			std::cout << std::endl;
			std::cout << "\e[96m*std::list*\e[39m" << std::endl << std::endl;
			{
				std::list<int> mstack;
				
				mstack.push_back(5);
				mstack.push_back(17);
				std::cout << mstack.back() << std::endl;
				mstack.pop_back();
				std::cout << mstack.size() << std::endl;
				mstack.push_back(3);
				mstack.push_back(5);
				mstack.push_back(737);
				//[...]
				mstack.push_back(0);
				std::list<int>::iterator it = mstack.begin();
				std::list<int>::iterator ite = mstack.end();
				++it;
				--it;
				while (it != ite)
				{
					std::cout << *it << std::endl;
					++it;
				}
				std::list<int> s(mstack);
			}
			
			std::cout << std::endl;
			std::cout << "\e[96m*std::vector*\e[39m" << std::endl << std::endl;
			{
				std::vector<int> mstack;
				
				mstack.push_back(5);
				mstack.push_back(17);
				std::cout << mstack.back() << std::endl;
				mstack.pop_back();
				std::cout << mstack.size() << std::endl;
				mstack.push_back(3);
				mstack.push_back(5);
				mstack.push_back(737);
				//[...]
				mstack.push_back(0);
				std::vector<int>::iterator it = mstack.begin();
				std::vector<int>::iterator ite = mstack.end();
				++it;
				--it;
				while (it != ite)
				{
					std::cout << *it << std::endl;
					++it;
				}
				std::vector<int> s(mstack);
			}
			
			std::cout << std::endl;
			std::cout << "\e[96m*std::deque*\e[39m" << std::endl << std::endl;
			{
				std::deque<int> mstack;
				
				mstack.push_back(5);
				mstack.push_back(17);
				std::cout << mstack.back() << std::endl;
				mstack.pop_back();
				std::cout << mstack.size() << std::endl;
				mstack.push_back(3);
				mstack.push_back(5);
				mstack.push_back(737);
				//[...]
				mstack.push_back(0);
				std::deque<int>::iterator it = mstack.begin();
				std::deque<int>::iterator ite = mstack.end();
				++it;
				--it;
				while (it != ite)
				{
					std::cout << *it << std::endl;
					++it;
				}
				std::deque<int> s(mstack);
			}
		}
		std::cout << std::endl;
		std::cout << "\t\e[93m---CUSTOM-MAIN---\e[39m" << std::endl << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\t\e[93m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
