#include "../class/Point.hpp"

Point::Point(): m_x(0), m_y(0)
{ return ; }

Point::~Point()
{}

Point::Point(Point const& src): m_x(0), m_y(0)
{
	(void)src;
}

Point & Point::operator=(Point const& src)
{
	(void)src;
	return (*this);
}

Point::Point(const float a_x, const float a_y): m_x(a_x), m_y(a_y)
{}

Fixed Point::getX() const
{ return(m_x); }

Fixed Point::getY() const
{ return(m_y); }

void	sort(Point *a, Point *b, Point *c)
{
	Point	*tmp;

	if (a->getX() < b->getX() || a->getX() < c->getX())
	{
		tmp = a;
		if (b->getX() > a->getX() && b->getX() >= c->getX())
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
	if (b->getY() > c->getY())
	{
		tmp = c;
		c = b;
		b = tmp;
	}

	std::cout << "a( " << a->getX() << " , " << a->getY() << " )\n";
	std::cout << "b( " << b->getX() << " , " << b->getY() << " )\n";
	std::cout << "c( " << c->getX() << " , " << c->getY() << " )\n";
}
