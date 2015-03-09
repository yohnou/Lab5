#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point( double _x, double _y ) :
	x(_x), 
	y(_y)
{	
	
}

bool Point::operator == (const Point & point) const
{
	throw logic_error("Not Implmented yet");
	return true;
}

bool Point::operator != (const Point & point) const
{
	throw logic_error("Not Implmented yet");
	return false; 
}
