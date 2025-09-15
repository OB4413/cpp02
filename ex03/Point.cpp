#include "Point.hpp"

float	Point::geterx() const{ return x.toFloat();}

float	Point::getery() const{ return y.toFloat();}

Point&	Point::operator=(const Point& other){
	(void)other;
	return *this;
}
