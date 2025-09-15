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
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float	toFloat(void) const;
		int	toInt(void) const;
};
std::ostream&	operator<<(std::ostream& os, const Fixed& f);
