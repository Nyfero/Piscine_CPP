#include "../class/Fixed.hpp"
#include "../class/Point.hpp"

int main()
{
	Point	a(0, 8.7f);
	Point	b(4.5f, 7.5f);
	Point	c(5.2f, 4.5f);
	Point p(1, 1);
	Point tmp;

	// sort(&a, &b, &c);
	if (a.getX() < b.getX() || a.getX() < c.getX())
	{
		tmp = a;
		if (b.getX() > a.getX() && b.getX() >= c.getX())
		{
			a = b;
			b = tmp;
		}
		else
		{
			a = c;
			c = tmp;
		}
	}
	if (b.getY() > c.getY())
	{
		tmp = c;
		c = b;
		b = tmp;
	}

	std::cout << std::endl;
	std::cout << "a( " << a.getX() << " , " << a.getY() << " )\n";
	std::cout << "b( " << b.getX() << " , " << b.getY() << " )\n";
	std::cout << "c( " << c.getX() << " , " << c.getY() << " )\n";

	// Point ab;
	// Point ac;
	// Point bc;

	Fixed a3;
	a3 = ((a.getY() - b.getY()) / (a.getX() - b.getX()));
	Fixed b3;
	b3 = (a.getY() - (a3 * a.getX()).toFloat());
	Fixed a1;
	a1 = ((a.getY() - c.getY()) / (a.getX() - c.getX()));
	Fixed b1;
	b1 = (a.getY() - (a1 * a.getX()).toFloat());
	Fixed a2;
	a2 = ((b.getY() - c.getY()) / (b.getX() - c.getX()));
	Fixed b2;
	b2 = (b.getY() - (a2 * b.getX()).toFloat());

	// h = ((a.getY() - c.getY()) / (a.getX() - c.getX()));
	// Point ac(h.toFloat(), (a.getY() - (h * a.getX())).toFloat());
	// h = ((b.getY() - c.getY()) / (b.getX() - c.getX()));
	// Point bc(h.toFloat(), (b.getY() - (h * b.getX())).toFloat());


	std::cout << "a3( " << a3 << " )\n";
	std::cout << "b3( " << b3 << " )\n";
	std::cout << "a1( " << a1 << " )\n";
	std::cout << "b1( " << b1 << " )\n";
	std::cout << "a2( " << a2 << " )\n";
	std::cout << "b2( " << b2 << " )\n";

	if (a.getY() < c.getY())
	{
		if (b.getY() < (a1 * b.getX() + b1))
		{
			if (p.getY() < (a1 * p.getX()) + b1)
			{
				if (b.getX() > c.getX() && p.getY() < (a1 * p.getX() + b1) && p.getY() > (a2 * p.getX() + b2) && p.getY() > (a3 * p.getX() + b3))
				{
					std::cout << "true" << std::endl;
					return (1);
				}
				else if (b.getX() < c.getX() && p.getY() < (a1 * p.getX() + b1) && p.getY() < (a2 * p.getX() + b2) && p.getY() > (a3 * p.getX() + b3))
				{
					std::cout << "true" << std::endl;
					return (1);
				}
				else
				{
					std::cout << "false" << std::endl;
					return (0);
				}
			}
			else if (p.getY() > (a1 * p.getX() + b1))
			{
				std::cout << "false" << std::endl;
				return (0);
			}
		}
		if (p.getY() > (a1 * b.getX() + b1))
		{
			if (p.getY() > (a1 * p.getX() + b1) && p.getY() < (a2 * p.getX() + b2) && p.getY() < (a3 * p.getX() + b3))
			{
				std::cout << "true" << std::endl;
				return (1);
			}
			else
			{
				std::cout << "false" << std::endl;
				return (0);
			}
		}
	}
	else if (a.getY() > c.getY())
	{
		if (b.getX() < c.getX() && p.getY() < (a1 * p.getX() + b1) && p.getY() < (a2 * p.getX() + b2) && p.getY() > (a3 * p.getX() + b3))
		{
			std::cout << "true" << std::endl;
			return (1);
		}
		if (b.getX() > c.getX() && p.getY() < (a1 * p.getX() + b1) && p.getY() > (a2 * p.getX() + b2) && p.getY() > (a3 * p.getX() + b3))
		{
			std::cout << "true" << std::endl;
			return (1);
		}
		else
		{
			std::cout << "false" << std::endl;
			return (0);
		}
	}
	else
	{
		std::cout << "false" << std::endl;
		return (0);
	}
	return (0);
}
