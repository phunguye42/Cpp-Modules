
class Fixed
{
private:
	int _value;
	static const int _numFractionalBits;

public:
	Fixed();
	Fixed(const Fixed &rhs);
	Fixed& operator = (const Fixed &rhs);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};