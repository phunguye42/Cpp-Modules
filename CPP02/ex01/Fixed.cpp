#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixedPointValue(n << _fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _fixedPointValue(roundf(n * (1 << _fractionalBits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

void Fixed::setRawBits(int const Raw) {
	_fixedPointValue = Raw;
}

float Fixed::toFloat(void) const {
	return ((float)_fixedPointValue / (1 << _fractionalBits)); //equivalent to (float)(_fixedPointValue / (1 << _fractionalBits))
}

int Fixed::toInt(void) const {
	return (_fixedPointValue >> _fractionalBits);
}

Fixed& Fixed::operator=(const Fixed &rhs){
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        _fixedPointValue = rhs.getRawBits();
    return *this;
}

std::ostream&   operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat(); //truncated to two decimal places by default
    return o;
}