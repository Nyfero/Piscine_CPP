#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <algorithm>
# include <vector>

//			//
//	Throw	//
//			//

class ElementNotFound : public std::exception
{
	public:
		virtual const char* what() const throw() {
				return ("\e[91mThe element is not in this array !\e[39m");
		}
};

//				//
//	Functions	//
//				//

template< typename T >
int	easyfind(T cont, int x) {
	int size = cont.size();
	for (int i = 0; i < size; i++)
		if (cont[i] == x)
			return (i);
	throw ElementNotFound();
	return (0);
}

template< typename T >
void	DispVector(T tab, int size) {
	for (int i = 0; i < size; i++)
		std::cout << "tab[" << i << "] => " << tab[i] << std::endl;
}

#endif
