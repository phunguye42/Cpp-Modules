
class Fixed
{
private:
	int value;
	static const int numFractionalBits;

public:
	Fixed();
	Fixed(const Fixed &rhs);
	Fixed& operator = (const Fixed &rhs);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};