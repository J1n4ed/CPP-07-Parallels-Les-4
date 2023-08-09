// fixed header for separated square functionality

#pragma once

#include "shape.h"

namespace jinx
{
	class Sqr final : virtual public Shape
	{
	public:

		/*
		Retrieve the type of the Shape
		*/
		std::string getType();

		/*
		Method to change the coords of the Sqr points in 2D space
		Shifts coords by the provided value
		*/
		void shift(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4);

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

		/*
		Get shape's square value
		*/
		double getSquare();

		Sqr() = delete;

		/*
		Default constructor for class Square
		Takes X,Y coors of for four points in 2D space
		*/
		Sqr(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4);

	private:

		int x1 = 0;
		int y1 = 0;
		int x2 = 0;
		int y2 = 0;
		int x3 = 0;
		int y3 = 0;
		int x4 = 0;
		int y4 = 0;

		jinx::figures type = sqr;

	}; // !Sqr
} // !jinx