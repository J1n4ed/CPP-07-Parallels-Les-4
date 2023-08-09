// fixed header for generic virtual shape functionality

#pragma once

#define _USE_MATH_DEFINES
#include<cmath>

#include <iostream>
#include <vector>
#include <string>

namespace jinx
{
	enum figures
	{
		line		= 0,
		sqr			= 1,
		cube		= 2,
		circle		= 3,
		cylinder	= 4
	};

	class Shape
	{
	public:

		virtual std::string getType() { return 0; };

		std::string switchTypes(jinx::figures _type)
		{
			switch (_type)
			{
			case line:
				return "Line";
				break;
			case sqr:
				return "Square";
				break;
			case cube:
				return "Cube";
				break;
			case circle:
				return "Circle";
				break;
			case cylinder:
				return "Cylinder";
				break;
			default:
				return "Error!";
				break;
			}
		}

		virtual double	getSquare()		{ return 0; };
		virtual double	getRadius()		{ return 0; };
		virtual double	getHeight()		{ return 0; };
		virtual double	getVolume()		{ return 0; };

	private:

		jinx::figures type;

	};

} // !jinx