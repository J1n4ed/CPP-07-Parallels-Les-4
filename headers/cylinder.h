// fixed header for separated cylinder functionality

#pragma once

#include "shape.h"

namespace jinx
{
	class Cylinder final : virtual public Shape
	{
	public:

		/*
		Retrieve the type of the Shape
		*/
		std::string getType();

		/*
		Method to change the coords of the Cylinder in 3D space
		Shifts coords by the provided value
		*/
		void shift(int _x1, int _y1, double _rad, double _height);

		/*
		Scale X coords by the provided mult
		*/
		void scaleX(int _x);

		/*
		Scale Y coords by the provided mult
		*/
		void scaleY(int _y);

		/*
		Scale radius by the provided mult
		*/
		void scaleRad(int _rad);

		/*
		Scale height by the provided mult
		*/
		void scaleHeight(int _height);

		/*
		Scale both axes, radius and height by the privided mult
		*/
		void scale(int _s);

		/*
		Get shape's square value
		*/
		double getSquare();

		/*
		Get shape's volume value
		*/
		double getVolume();

		/*
		Get shape's height value
		*/
		double getHeight();

		/*
		Get shape's radius value
		*/
		double getRadius();

		Cylinder() = delete;

		/*
		Default constructor for class Cylinder
		Takes X,Y coors of center point in 3D space plus Radius in double and Height in double
		*/
		Cylinder(int _x1, int _y1, double _rad, double _height);

	private:

		int x1			= 0;
		int y1			= 0;
		int rad			= 0;
		int height		= 0;

		jinx::figures type = cylinder;

	}; // !Cylinder
} // !jinx