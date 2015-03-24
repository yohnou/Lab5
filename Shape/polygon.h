#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Polygon: public Shape
	{
	public:
		Polygon(IWindowAPI&_window);
		void add(const Point& _point);
		void draw();

	};

}
