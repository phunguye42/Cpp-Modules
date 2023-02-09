# include "Fixed.hpp"
# include <iostream>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &rhs){
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(rhs.getRawBits());
}

Fixed::Fixed& operator = (const Fixed &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this
}

~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_Value;	
}

void Fixed::setRawBits(int const raw){
	this->_value = raw;
}