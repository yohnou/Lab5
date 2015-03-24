#include "stdafx.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI& _window)
	:Shape(_window),
	radius(0)
{
}

void Circle::setCenter(const Point& _point)
{
	center = _point;
}

void Circle::setRadius(const int _radius)
{
	if (_radius < 0) throw invalid_argument("Negative radius not allowed!");
	radius = _radius;
}

void Circle::draw()
{
	if (center.x == NULL || center.y == NULL) throw runtime_error("No center!");
	Color* color = new Color();

	windowAPI->setDrawingColor(*color);

	windowAPI->drawCircle(center, radius); 
}

void Circle::setFillColor(Color::COLOR_TYPE _color)
{
	fillColor = _color;
	windowAPI->fillCircle(center, radius);
}

void Circle::setLineColor(Color::COLOR_TYPE _lineColor)
{
	lineColor = _lineColor;
	windowAPI->drawCircle(center, radius);
}