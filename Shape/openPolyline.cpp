#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI& _window)
	:Shape(_window)
{
}

void OpenPolyline::add(const Point& _point)
{
	nbPoints++;
	points.push_back(_point);
}

void OpenPolyline::draw()
{
	if (nbPoints < 2) throw runtime_error("Less than 2 points");

	Color* color = new Color();

	windowAPI->setDrawingColor(*color);

	for (unsigned int i = 0; i < nbPoints - 1; i++)
	{
		windowAPI->drawLine(points[i],points[i + 1]);
	}
}