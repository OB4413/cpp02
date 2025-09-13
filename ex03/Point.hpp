#pragma once

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point(){}
		Point(const float x, const float y): x(x), y(y){}
		Point(const Point& other): x(other.x), y(other.y){}
		Point&	operator=(const Point& other);
		float	geterx() const{ return x.toFloat();}
		float	getery() const{ return y.toFloat();}
		~Point(){};
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
