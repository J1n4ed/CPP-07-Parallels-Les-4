// fixed header for separated cube functionality

#pragma once

#include "shape.h"

namespace jinx
{
	class Cube final : virtual public Shape
	{
	public:

		/*
		Retrieve the type of the Shape
		*/
		std::string getType();

		/*
		Method to change the coords of the Cube points in 2D space
		Shifts coords by the provided value
		*/
		void shift(	int _x1, int _y1, int _z1, 
					int _x2, int _y2, int _z2, 
					int _x3, int _y3, int _z3, 
					int _x4, int _y4, int _z4, 
					int _x5, int _y5, int _z5,
					int _x6, int _y6, int _z6,
					int _x7, int _y7, int _z7,
					int _x8, int _y8, int _z8
		);

		/*
		Scale X coords by the provided mult
		*/
		void scaleX(int _x);

		/*
		Scale Y coords by the provided mult
		*/
		void scaleY(int _y);

		/*
		Scale Z coords by the provided mult
		*/
		void scaleZ(int _z);

		/*
		Scale all axes by the privided mult
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

		Cube() = delete;

		/*
		Default constructor for class Square
		Takes X,Y,Z coors of for four points in 3D space
		*/
		Cube(	int _x1, int _y1, int _z1,
				int _x2, int _y2, int _z2,
				int _x3, int _y3, int _z3,
				int _x4, int _y4, int _z4,
				int _x5, int _y5, int _z5,
				int _x6, int _y6, int _z6,
				int _x7, int _y7, int _z7,
				int _x8, int _y8, int _z8
		);

	private:

		int x1 = 0;	int y1 = 0;	int z1 = 0;
		int x2 = 0;	int y2 = 0; int z2 = 0;
		int x3 = 0;	int y3 = 0; int z3 = 0;
		int x4 = 0;	int y4 = 0; int z4 = 0;
		int x5 = 0;	int y5 = 0; int z5 = 0;
		int x6 = 0;	int y6 = 0; int z6 = 0;
		int x7 = 0;	int y7 = 0; int z7 = 0;
		int x8 = 0;	int y8 = 0; int z8 = 0;

		jinx::figures type = cube;

	}; // !Cube
} // !jinx