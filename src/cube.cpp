// fixed source for separated cube functionality

#include "../headers/cube.h"

#define _USE_MATH_DEFINES

#include<cmath>

/*
Default constructor for class Cube
Takes X,Y coors of for two points in 3D space
*/
jinx::Cube::Cube(	int _x1, int _y1, int _z1,
					int _x2, int _y2, int _z2,
					int _x3, int _y3, int _z3,
					int _x4, int _y4, int _z4,
					int _x5, int _y5, int _z5,
					int _x6, int _y6, int _z6,
					int _x7, int _y7, int _z7,
					int _x8, int _y8, int _z8
)	:				x1(_x1), y1(_y1), z1(_z1),
					x2(_x2), y2(_y2), z2(_z2),
					x3(_x3), y3(_y3), z3(_z3),
					x4(_x4), y4(_y4), z4(_z4),
					x5(_x5), y5(_y5), z5(_z5),
					x6(_x6), y6(_y6), z6(_z6),
					x7(_x7), y7(_y7), z7(_z7),
					x8(_x8), y8(_y8), z8(_z8) {}

/*
Method to change the coords of the Cube points in 3D space
Shifts coords by the provided value
*/
void jinx::Cube::shift(		int _x1, int _y1, int _z1,
							int _x2, int _y2, int _z2,
							int _x3, int _y3, int _z3,
							int _x4, int _y4, int _z4,
							int _x5, int _y5, int _z5,
							int _x6, int _y6, int _z6,
							int _x7, int _y7, int _z7,
							int _x8, int _y8, int _z8)
{
	x1 += _x1;	y1 += _y1; z1 += _z1;
	x2 += _x2;	y2 += _y2; z2 += _z2;
	x3 += _x3;  y3 += _y3; z3 += _z3;
	x4 += _x4;	y4 += _y4; z4 += _z4;
	x5 += _x5;	y5 += _y5; z5 += _z5;
	x6 += _x6;	y6 += _y6; z6 += _z6;
	x7 += _x7;	y7 += _y7; z7 += _z7;
	x8 += _x8;	y8 += _y8; z8 += _z8;
} // !shift

/*
Retrieve the type of the Shape
*/
std::string jinx::Cube::getType()
{
	return switchTypes(type);
} // !getType

/*
Scale X coords by the provided multiplyer
*/
void jinx::Cube::scaleX(int _x)
{
	x1 *= _x;
	x2 *= _x;
	x3 *= _x;
	x4 *= _x;
	x5 *= _x;
	x6 *= _x;
	x7 *= _x;
	x8 *= _x;
} // !scaleX

/*
Scale Y coords by the provided multiplyer
*/
void jinx::Cube::scaleY(int _y)
{
	y1 *= _y;
	y2 *= _y;
	y3 *= _y;
	y4 *= _y;
	y5 *= _y;
	y6 *= _y;
	y7 *= _y;
	y8 *= _y;
} // !scaleY

/*
Scale Z coords by the provided mult
*/
void jinx::Cube::scaleZ(int _z)
{
	z1 *= _z;
	z2 *= _z;
	z3 *= _z;
	z4 *= _z;
	z5 *= _z;
	z6 *= _z;
	z7 *= _z;
	z8 *= _z;
}

/*
Scale both axes by the privided mult
*/
void jinx::Cube::scale(int _s)
{
	x1 *= _s;	y1 *= _s;	z1 *= _s;
	x2 *= _s;	y2 *= _s;	z2 *= _s;
	x3 *= _s;	y3 *= _s;	z3 *= _s;
	x4 *= _s;	y4 *= _s;	z4 *= _s;
	x5 *= _s;	y5 *= _s;	z5 *= _s;
	x6 *= _s;	y6 *= _s;	z6 *= _s;
	x7 *= _s;	y7 *= _s;	z7 *= _s;
	x8 *= _s;	y8 *= _s;	z8 *= _s;
} // !scale

/*
Get shape's square value
*/
double jinx::Cube::getSquare()
{
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	int c = abs(z1 - z2);

	return 2 * a * b + 2 * a * c + 2 * b * c;
} // !getSquare

/*
Get shape's volume value
*/
double jinx::Cube::getVolume()
{
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	int c = abs(z1 - z2);
	return a * b * c;
} // !getVolume