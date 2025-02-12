#include "Fixed.hpp"
#include <iostream>
// ◦A static constant integer to store the number of fractional bits. Its value
// will always be the integer literal 8.
const int Example::fbits = 8;

// ◦A default constructor that initializes the fixed-point number value to 0.
Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called\n";
}
// ◦A copy constructor.
Fixed::Fixed(const Fixed& other)
{
	value = other.value;
	std::cout << "Copy constructor called\n";
}
// ◦A copy assignment operator overload.
Fixed& Fixed::operator=(const Fixed& other)
{
	// XXX
	std::cout << "Copy assignment operator called\n";
}
// ◦A destructor.
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
// ◦A member function int getRawBits( void ) const;
// that returns the raw value of the fixed-point value.
int Fixed::getRawBits( void )
{
	return value;
	std::cout << "getRawBits member function called\n";
}
// ◦A member function void setRawBits( int const raw );
// that sets the raw value of the fixed-point number.
void Fixed::setRawBits( int const raw )
{
	value = raw;
}
