#include "Point.hpp"

int main( void ) {
	Point a(1, 1);
	Point b(5, 2);
	Point c(2, 5);
	Point p(4, 3);


	if (bsp(a, b, c, p))
		std::cout << "the point p is inside of the edge abc" << std::endl;
	else
		std::cout << "the point p is (not inside) of the edge abc" << std::endl;
	return 0;
}
