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
		Fixed	getX() const;
		Fixed	getY() const;
	private:
		Fixed const	m_x;
		Fixed const	m_y;
};

void sort(Point *a, Point *b, Point *c);

#endif
