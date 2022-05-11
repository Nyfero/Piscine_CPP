#include "../class/Point.hpp"

Point::Point(): m_x(0), m_y(0)
{ return ; }

Point::~Point()
{}

Point::Point(Point const& src)
{
	m_x = src.m_x;
	m_y = src.m_y;
}

Point & Point::operator=(Point const& src)
{
	m_x = src.m_x;
	m_y = src.m_y;
	return (*this);
}

Point::Point(const float a_x, const float a_y)
{
	m_x.m_value = roundf(a_x * (1 << m_x.m_bits));
	m_y.m_value = roundf(a_y * (1 << m_y.m_bits));
}
