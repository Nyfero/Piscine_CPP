#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <time.h>
# include <stdlib.h>

template< typename T >
class Array
{
	private:
		T				*m_array;
		unsigned int	m_size;

	public:
		//Constructors
		Array<T>(): m_size(0) {
			this->m_array = new T[0];
		}
		
		Array<T>(unsigned int n): m_size(n) {
			this->m_array = new T[n];
		}
		
		Array<T>(Array<T> const& src): m_size(src.m_size) {
			this->m_array = new T[src.m_size];
			for(unsigned int i = 0; i < src.m_size; i++)
				this->m_array[i] = src.m_array[i];
		}
		
		Array<T> const& operator=(Array<T> const& src) {
			this->m_size = src.m_size;
			if (this->m_array)
				delete [] this->m_array;
			this->m_array = new T[src.m_size];
			for(unsigned int i = 0; i < src.m_size; i++)
				this->m_array[i] = src.m_array[i];
			return (*this);
		}
		
		~Array<T>() {
			if (this->m_array)
				delete [] this->m_array;
		}
		
		//Throw
		class IndexOutOfRange : public std::exception
		{
			public:
				virtual const char* what() const throw() {
						return ("\e[91mIndex Out Of Range !\e[39m");
				}
		};
		
		//Functions
		unsigned int	size() const {
			return (this->m_size);
		}
		
		T & operator[](unsigned int i) {
			if (this->m_size <= i)
				throw IndexOutOfRange();
			return (this->m_array[i]);
		}
};

#endif
