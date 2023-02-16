<<<<<<< HEAD
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _value;
	

public:
	Fixed(const int integer);
	Fixed(const float FP_num);

	float toFloat(void) const;
	int toInt(void) const;


=======
#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>

class Fixed
{
private:
	int _value;
	static const int _numFractionalBits;

public:
	Fixed();
}