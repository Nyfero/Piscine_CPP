#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	m_x;
		Fixed const	m_y;

	public:
		//Orthodox Canonical Form
		Point();
		~Point();
		Point(Point const& src);
		Point & operator=(Point const& src);

		//Constructor
		Point(const float a_x, const float a_y);
		
		//Functions
		Fixed	getX() const;
		Fixed	getY() const;
};

bool	bsp(Point a, Point b, Point c, Point point);
Fixed	scalar_product(Point a, Point b, Point c);

#endif
