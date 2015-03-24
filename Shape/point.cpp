#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point()
	:x(0),
	 y(0)
{
}

Point::Point(const double _x, const double _y ) :
	x(_x), 
	y(_y)
{	
	if (_x < 0 || _y < 0) throw invalid_argument("Point is negative.");
}

bool Point::operator == (const Point & point) const
{
	if (x == point.x && y == point.y) return true;
	return false;
}

bool Point::operator != (const Point & point) const
{
	if (x == point.x && y == point.y) return false;
	return true;
}
