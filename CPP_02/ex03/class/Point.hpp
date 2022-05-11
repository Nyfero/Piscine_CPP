#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		~Point();
		Point(Point const& src);
		Point & operator=(Point const& src);
		
		Point(const float a_x, const float a_y);
	private:
		Fixed	m_x;
		Fixed	m_y;
};

#endif
