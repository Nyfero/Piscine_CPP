#ifndef BASE_HPP
# define BASE_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cmath>

class Base
{
	public:
		virtual	~Base();
};

class A: public Base
{};

class B: public Base
{};

class C: public Base
{};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
