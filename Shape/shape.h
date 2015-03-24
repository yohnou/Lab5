#pragma once
#include "stdafx.h"

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape(IWindowAPI& _window);
		virtual void add(const Point& _point);
		virtual void draw();
		virtual Point getPoint(unsigned int _index);
		virtual void setLineColor(Color::COLOR_TYPE _color);
		virtual void setFillColor(Color::COLOR_TYPE _color);
		virtual Color getLineColor();
		virtual Color getFillColor();
		virtual int getNumberOfPoints();
		
	protected:
		IWindowAPI* windowAPI;
		vector<Point> points;
		Color lineColor;
		Color fillColor;
		int nbPoints;
	};
}
