#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fp;
		static const int fractional = 8;
	public:
		Fixed();
		Fixed(const int fixed_p);
		Fixed(const float fixed_p);
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		~Fixed(){}
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float	toFloat(void) const;
		int	toInt(void) const;
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		static	Fixed&	min(Fixed& i, Fixed& j);
		static const	Fixed&	min(const Fixed& i,const Fixed& j);
		static	Fixed&	max(Fixed& i, Fixed& j);
		static const	Fixed&	max(const Fixed& i,const Fixed& j);
};
std::ostream&	operator<<(std::ostream& os, const Fixed& f);
