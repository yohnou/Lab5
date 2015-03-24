#include "stdafx.h"

using namespace ShapeLibrary;


ShapeFactory::ShapeFactory(IWindowAPI& _window)
	:Shape(_window)
{
}

OpenPolyline ShapeFactory::createOpenPolyLine()
{
	OpenPolyline* openPolyLine = new OpenPolyline(*windowAPI);
	return *openPolyLine;
}

Circle ShapeFactory::createCircle(Point _point, unsigned int _radius)
{
	Circle* circle = new Circle(*windowAPI);
	circle->setCenter(_point);
	circle->setRadius(_radius);
	return *circle;
}

Rectangle ShapeFactory::createRectangle(Point _position, unsigned _height, unsigned _width)
{
	Rectangle* rectangle = new Rectangle(*windowAPI);
	rectangle->setPosition(_position);
	rectangle->setHeight(_height);
	rectangle->setWidth(_width);

	return *rectangle;
}

ClosedPolyline ShapeFactory::createClosedPolyLine()
{
	ClosedPolyline* closedPolyline = new ClosedPolyline(*windowAPI);
	return *closedPolyline;

}

Polygon ShapeFactory::createPolygone()
{
	Polygon* polygon = new Polygon(*windowAPI);
	return *polygon;
}