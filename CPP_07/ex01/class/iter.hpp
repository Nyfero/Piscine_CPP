#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>
# include <iomanip>

template< typename T >
void	iter(T *arr, int len, void (*f)(T &))
{
	int i = -1;
	
	while (++i < len)
		f(arr[i]);
}

template< typename T >
void	displayTab(T &arr)
{ std::cout << "Value: " << arr << std::endl; }

template< typename T >
void	addFive(T &arr)
{ arr += 5; }

#endif
