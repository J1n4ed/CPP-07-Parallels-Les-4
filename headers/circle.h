// fixed header for separated circle functionality

#pragma once

#include "shape.h"

namespace jinx
{
	class Circle final : virtual public Shape
	{
	public:

		/*
		Retrieve the type of the Shape
		*/
		std::string getType();

		/*
		Method to change the coords of the Circle points in 2D space
		Shifts coords by the provided value
		*/
		void shift(int _x1, int _y1, double _rad);

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
		Scale both axes and radius by the privided mult
		*/
		void scale(int _s);

		/*
		Get shape's square value
		*/
		double getSquare();

		/*
		Get shape's radius value
		*/
		double getRadius();

		Circle() = delete;

		/*
		Default constructor for class Circle
		Takes X,Y coors of center point in 2D space plus Radius in double
		*/
		Circle(int _x1, int _y1, double _rad);

	private:

		int x1 = 0;
		int y1 = 0;
		int rad = 0;

		jinx::figures type = circle;

	}; // !Circle
} // !jinx