#include <iostream>
#include "Fixed.hpp"

#include <iostream>

	int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "---------------------------------------" << std::endl;

	Fixed c(7);
	Fixed d(8);

	std::cout << "min:" << Fixed::min( c, d) << std::endl;
	std::cout << "max:" << Fixed::max( c, d) << std::endl;

	c = c + d;

	std::cout << "min:" << Fixed::min( c, d) << std::endl;
	std::cout << "max:" << Fixed::max( c, d) << std::endl;
	std::cout << c + d << std::endl;

	return 0;
}
