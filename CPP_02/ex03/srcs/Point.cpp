#include "../class/Point.hpp"

//					//
//	Canonical Form	//
//					//

Point::Point(): m_x(0), m_y(0) {}

Point::~Point() {}

Point::Point(Point const& src): m_x(src.m_x), m_y(src.m_y) {}

Point & Point::operator=(Point const& src) {
	(void)src;
	return (*this);
}

//				//
//	Constructor	//
//				//

Point::Point(const float a_x, const float a_y): m_x(a_x), m_y(a_y) {}

//				//
//	Functions	//
//				//

Fixed Point::getX() const {
	return(this->m_x);
}

Fixed Point::getY() const {
	return(this->m_y);
}
