#include "stdafx.h"

using namespace ShapeLibrary;

ClosedPolyline::ClosedPolyline(IWindowAPI& _window)
	:Shape(_window)
{
}

void ClosedPolyline::draw()
{
	if (nbPoints < 3) throw runtime_error("Less than 3 points");
	Shape::draw();
}

void ClosedPolyline::add(const Point& _point)
{
	Shape::add(_point);
}

