#include "../class/Fixed.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << "\t\t\e[91m---END-MAIN---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---COMPARISON---\e[39m" << std::endl << std::endl;
	{
		Fixed	a(42);
		Fixed	b(5.0f);
		Fixed	c(5.05f);
		Fixed	d(42);
		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---INT-INT---\e[39m" << std::endl << std::endl;
		std::cout << "a > d  ->" << (a > d) << std::endl;
		std::cout << "a < d  ->" << (a < d) << std::endl;
		std::cout << "a >= d ->" << (a >= d) << std::endl;
		std::cout << "a <= d ->" << (a <= d) << std::endl;
		std::cout << "a == d ->" << (a == d) << std::endl;
		std::cout << "a != d ->" << (a != d) << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---INT-FLOAT---\e[39m" << std::endl << std::endl;
		std::cout << "a > c  ->" << (a > c) << std::endl;
		std::cout << "a < c  ->" << (a < c) << std::endl;
		std::cout << "a >= c ->" << (a >= c) << std::endl;
		std::cout << "a <= c ->" << (a <= c) << std::endl;
		std::cout << "a == c ->" << (a == c) << std::endl;
		std::cout << "a != c ->" << (a != c) << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---FLOAT-FLOAT---\e[39m" << std::endl << std::endl;
		std::cout << "b > c  ->" << (b > c) << std::endl;
		std::cout << "b < c  ->" << (b < c) << std::endl;
		std::cout << "b >= c ->" << (b >= c) << std::endl;
		std::cout << "b <= c ->" << (b <= c) << std::endl;
		std::cout << "b == c ->" << (b == c) << std::endl;
		std::cout << "b != c ->" << (b != c) << std::endl;
	}
	std::cout << "\t\t\e[91m---END-COMPARISON---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---OPERATOR---\e[39m" << std::endl << std::endl;
	{
		Fixed	a(4);
		Fixed	b(2);
		Fixed	c(4.5f);
		Fixed	d(2.5f);
		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---INT-INT---\e[39m" << std::endl << std::endl;
		std::cout << "a + b ->" << (a + b) << std::endl;
		std::cout << "a - b ->" << (a - b) << std::endl;
		std::cout << "a * b ->" << (a * b) << std::endl;
		std::cout << "a / b ->" << (a / b) << std::endl;

		
		std::cout << std::endl;
		std::cout << "\t\e[93m---INT-FLOAT---\e[39m" << std::endl << std::endl;
		std::cout << "a + c ->" << (a + c) << std::endl;
		std::cout << "a - c ->" << (a - c) << std::endl;
		std::cout << "a * c ->" << (a * c) << std::endl;
		std::cout << "a / c ->" << (a / c) << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---FLOAT-FLOAT---\e[39m" << std::endl << std::endl;
		std::cout << "c + d ->" << (c + d) << std::endl;
		std::cout << "c - d ->" << (c - d) << std::endl;
		std::cout << "c * d ->" << (c * d) << std::endl;
		std::cout << "c / d ->" << (c / d) << std::endl;
	}
	std::cout << "\t\t\e[91m---END-OPERATOR---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MIN-MAX---\e[39m" << std::endl << std::endl;
	{
		Fixed	a(42);
		Fixed	b(24);
		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---START---\e[39m" << std::endl << std::endl;
		std::cout << "min(a, b) ->" << Fixed::min( a, b ) << std::endl;
		std::cout << "max(a, b) ->" << Fixed::max( a, b ) << std::endl;

	}
	std::cout << "\t\t\e[91m---END-MIN-MAX---\e[39m" << std::endl << std::endl;
	return (0);
}
