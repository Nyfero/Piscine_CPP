#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <algorithm>
# include <vector>
# include <iterator>
# include <stdexcept>

class Span
{
	private:
		std::vector<int>	m_array;
		unsigned int		m_size;
		unsigned int		m_compt;
		
		Span();
	
	public:
		//Constructors
		Span(unsigned int a_size);
		virtual ~Span();
		Span(Span const& src);
		Span & operator=(Span const& src);
		
		//Throw
		class ToManyElement : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class NotEnoughNumber : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		//Functions
		void	addNumber(int nb);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	addRange(int size);
		void	addList(std::vector<int> tab);
};

#endif
