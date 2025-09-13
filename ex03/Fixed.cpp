#include "Fixed.hpp"

Fixed::Fixed(){
	fp = 0;
}

Fixed::Fixed(const int fixed_p){
	fp = fixed_p * (1 << fractional);
}

Fixed::Fixed(const float fixed_p){
	fp = roundf(fixed_p * (1 << fractional));
}

Fixed::Fixed(const Fixed& other){
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other){
	this->fp = other.fp;
	return *this;
}

int	Fixed::getRawBits( void ) const {
	return fp;
}

void Fixed::setRawBits( int const raw ){
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

bool	Fixed::operator>(const Fixed& other) const {
	return (this->fp > other.fp);
}

bool	Fixed::operator<(const Fixed& other) const{
	return (this->fp < other.fp);
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (this->fp >= other.fp);
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (this->fp <= other.fp);
}

bool	Fixed::operator==(const Fixed& other) const {
	return (this->fp == other.fp);
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (this->fp != other.fp);
}

Fixed	Fixed::operator+(const Fixed& other) const {
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& other) const {
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& other) const {
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& other) const {
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed&	Fixed::operator++(){
	this->fp++;
	return *this;
}

Fixed&	Fixed::operator--(){
	this->fp--;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed temp(*this);
	this->fp++;
	return temp;
}

Fixed	Fixed::operator--(int){
	Fixed temp(*this);
	this->fp--;
	return temp;
}

Fixed&	Fixed::min(Fixed& i, Fixed& j){
	return (i < j ? i : j);
}

const	Fixed&	Fixed::min(const Fixed& i,const Fixed& j){
	return (i < j ? i : j);
}

Fixed&	Fixed::max(Fixed& i, Fixed& j){
	return (i > j ? i : j);
}

const	Fixed&	Fixed::max(const Fixed& i,const Fixed& j){
	return (i > j ? i : j);
}
