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

bool    operator>(const Fixed &rhs) const {
	return(_fixedPointValue > rhs.getRawBits());
}

bool    operator<(const Fixed &rhs) const {
	return(_fixedPointValue < rhs.getRawBits());
}

bool    operator>=(const Fixed &rhs) const {
	return(_fixedPointValue >= rhs.getRawBits());
}

bool    operator<=(const Fixed&rhs) const {
	return(_fixedPointValue <= rhs.getRawBits());
}

bool    operator==(const Fixed &rhs) const {
	return(_fixedPointValue == rhs.getRawBits());
}

bool    operator!=(const Fixed &rhs) const {
	return(_fixedPointValue != rhs.getRawBits());
}

Fixed   operator+(const Fixed &rhs) const {
	return(Fixed(toFloat() + rhs.toFloat()));
}

Fixed   operator-(const Fixed &rhs) const {
	return(Fixed(toFloat() - rhs.toFloat()));
}

Fixed   operator*(const Fixed &rhs) const {
	return(Fixed(toFloat() * rhs.toFloat()));
}

Fixed   operator/(const Fixed &rhs) const {
	return(Fixed(toFloat() / rhs.toFloat()));
}

Fixed&  operator++(void) { //pre increment
	_fixedPointValue++;
    return *this;
}

Fixed   operator++(int) { //ppost-increment
	Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed&  operator--(void) { //pre-decrement
	_fixedPointValue--;
	return *this;
}

Fixed   operator--(int) { // post-decrement
	Fixed tmp(*this);
	operator--; //decrement current object, but return a copy.
	return(tmp);
}
/*Note that the second overload takes an extra int parameter, which is not used in the function.
 This is a common convention to disambiguate between the pre- and post-decrement operators, as 
 the signature of the post-decrement operator needs to be different from the pre-decrement operator
  in order to overload both of them.*/

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed&  Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}
