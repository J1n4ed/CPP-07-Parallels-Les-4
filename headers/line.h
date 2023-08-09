// fixed header for separated line functionality

#pragma once

#include "shape.h"

namespace jinx
{
	class Line final : virtual public Shape
	{
	public:

		/*
		Retrieve the type of the Shape
		*/
		std::string getType();

		/*
		Method to change the coords of the Line points in 2D space
		Shifts coords by the provided value
		*/
		void shift(int _x1, int _y1, int _x2, int _y2);

		/*
		Scale X coords by the provided mult
		*/
		void scaleX(int _x);

		/*
		Scale Y coords by the provided mult
		*/
		void scaleY(int _y);

		/*
		Scale both axes by the privided mult
		*/
		void scale(int _s);

		Line() = delete;

		/*
		Default constructor for class Line
		Takes X,Y coors of for two points in 2D space
		*/
		Line(int _x1, int _y1, int _x2, int _y2);		

	private:

		int x1 = 0;
		int y1 = 0;
		int x2 = 0;
		int y2 = 0;

		jinx::figures type = line;

	}; // !Line

} // !jinx