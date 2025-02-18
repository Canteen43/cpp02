#include "Point.hpp"
// ◦A default constructor that initializes x and y to 0.
Point()
{}
// ◦A constructor that takes as parameters two constant floating-point numbers.
// It initializes x and y with those parameters.
Point(const float nb1, const float nb2)
{
	x(nb1);
	y(nb2);
}
// ◦A copy constructor.
Point(const Point& other)
{
	x.set
}
// ◦A copy assignment operator overload.
Point& operator=(const Point& other);
// ◦A destructor.
~Point()
{}
// ◦Anything else useful.