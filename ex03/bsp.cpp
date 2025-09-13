#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	float	cross_product1;
	float	cross_product2;
	float	cross_product3;

	cross_product1 = (b.geterx() - a.geterx()) * (point.getery() - a.getery());
	cross_product1 -= (b.getery() - a.getery()) * (point.geterx() - a.geterx());

	cross_product2 = (c.geterx() - b.geterx()) * (point.getery() - b.getery());
	cross_product2 -= (c.getery() - b.getery()) * (point.geterx() - b.geterx());

	cross_product3 = (a.geterx() - c.geterx()) * (point.getery() - c.getery());
	cross_product3 -= (a.getery() - c.getery()) * (point.geterx() - c.geterx());

	if (cross_product1 >= 0 && cross_product2 >= 0 &&cross_product3 >= 0)
		return true;
	else if (cross_product1 < 0 && cross_product2 < 0 &&cross_product3 < 0)
		return true;
	return false;
}
