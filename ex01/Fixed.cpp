#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	fp = 0;
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(const int fixed_p){
	std::cout << "Int constructor called" << std::endl;
	fp = fixed_p * (1 << fractional);
}

Fixed::Fixed(const float fixed_p){
	std::cout << "Float constructor called" << std::endl;
	fp = roundf(fixed_p * (1 << fractional));
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fp = other.fp;
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fp;
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	fp = raw;
}

float	Fixed::toFloat(void) const {
	return (float)fp / (1 << fractional);
}

int	Fixed::toInt(void) const {
	return (fp >> fractional);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& f){
	os << f.toFloat();
	return os;
}
