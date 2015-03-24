#include "stdafx.h"

using namespace ShapeLibrary;


Polygon::Polygon(IWindowAPI& _window)
	:Shape(_window)
{
}

void Polygon::add(const Point& _point)
{
 	for (unsigned int i = 0; i < nbPoints; i++)
	{
		//if ((points[i].x > _point.x) && _point.x == _point.y) throw runtime_error("point added to an existing line");
		//if () throw runtime_error("point added is crossing an existing line");
	}
	Shape::add(_point);
}

void Polygon::draw()
{
	Color* color = new Color();

	windowAPI->setDrawingColor(*color);

	for (unsigned int i = 0; i < nbPoints; i++)
	{
		if (i == points.size() - 1)
		{
			windowAPI->drawLine(points[i], points[0]);
		}
		else
		{
			windowAPI->drawLine(points[i], points[i + 1]);
		}
		
	}
}