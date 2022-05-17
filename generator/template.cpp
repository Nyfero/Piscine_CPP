#include "../class/x.hpp"

x::x()
{ std::cout << "x Constructor by default call" << std::endl; }

x::~x()
{ std::cout << "x Destructor call on: " << this-> << std::endl; }

x::x(x const& src):
{ std::cout << "x Constructor by copy call" << std::endl; }

x x::operator=(x const& src)
{
	std::cout << "x Constructor by assignement call" << std::endl;
	return (*this);
}
