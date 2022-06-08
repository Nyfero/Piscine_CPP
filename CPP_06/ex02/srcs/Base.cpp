# include "../class/Base.hpp"

Base::~Base()
{ std::cout << "Base Destructor call" << std::endl; }

Base	*generate(void)
{
	srand (time(NULL));
	int	i = rand() % 3;
	
	switch(i)
	{
		case 0:
		{
			std:: cout << "\e[93mA is created\e[39m" << std::endl;
			return (new A);
		}
		case 1:
		{
			std:: cout << "\e[93mB is created\e[39m" << std::endl;
			return (new B);
		}
		case 2:
		{
			std:: cout << "\e[93mC is created\e[39m" << std::endl;
			return (new C);
		}
	}
	std::cout << "An error occured" << std::endl;
	return (NULL);
}

void	identify(Base *p)
{
	A	*Aptr = dynamic_cast<A*>(p);
	B	*Bptr = dynamic_cast<B*>(p);
	C	*Cptr = dynamic_cast<C*>(p);
	
	if (Aptr)
		std::cout << "\e[92mIt's an A\e[39m" << std::endl;
	else if (Bptr)
		std::cout << "\e[92mIt's a B\e[39m" << std::endl;
	else if (Cptr)
		std::cout << "\e[92mIt's a C\e[39m" << std::endl;
	else
		std:: cout << "\e[91mNot a Base Child\e[39m" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	Aptr = dynamic_cast<A&>(p);
		std::cout << "\e[92mIt's an A\e[39m" << std::endl;
	}
	catch(const std::exception &e)
	{
		try
		{
			B	Bptr = dynamic_cast<B&>(p);
			std::cout << "\e[92mIt's a B\e[39m" << std::endl;
		}
		catch (const std::exception& e)
		{
			try
			{
				C	Cptr = dynamic_cast<C&>(p);
				std::cout << "\e[92mIt's a C\e[39m" << std::endl;
			}
			catch (const std::exception & e)
			{ std::cerr << e.what() << std::endl; }
		}
	}
}
