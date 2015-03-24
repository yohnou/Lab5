#include "stdafx.h"

using namespace ShapeLibrary;


Rectangle::Rectangle(IWindowAPI& _window)
	:Shape(_window),
	 height(0),
	 width(0)
{
}

void Rectangle::draw()
{
	if (position.x == NULL || position.y == NULL) throw runtime_error("No point given");

	Color* color = new Color();

	windowAPI->setDrawingColor(*color);

	windowAPI->drawRectangle(position, width, height);
}

void Rectangle::setPosition(const Point& _point)
{
	position = _point;
}

void Rectangle::setHeight(const int _height)
{
	if (_height < 0) throw invalid_argument("Negative height not allowed!");

	height = _height;
}

void Rectangle::setWidth(const int _width)
{
	if (_width < 0) throw invalid_argument("Negative width not allowed!");
	width = _width;
}

void Rectangle::setFillColor(Color::COLOR_TYPE _color)
{
	fillColor = _color;
	windowAPI->fillRectangle(position, width, height);
}

void Rectangle::setLineColor(Color::COLOR_TYPE _lineColor)
{
	lineColor = _lineColor;
	windowAPI->drawRectangle(position, width, height);
}