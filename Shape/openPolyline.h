#pragma once
#include "stdafx.h"

using namespace  std;


namespace ShapeLibrary
{
	class OpenPolyline : public Shape
	{
	public:
		OpenPolyline(IWindowAPI& _window);
		void add(const Point& _point);
		void draw();

	};
}
