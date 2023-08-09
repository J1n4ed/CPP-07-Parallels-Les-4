// fixed source for separated square functionality

#include "../headers/sqr.h"

#define _USE_MATH_DEFINES

#include<cmath>

/*
Default constructor for class Sqr
Takes X,Y coors of for two points in 2D space
*/
jinx::Sqr::Sqr(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4) : x1(_x1), x2(_x2), y1(_y1), y2(_y2), x3(_x3), x4(_x4), y3(_y3), y4(_y4) {}

/*
Method to change the coords of the Sqr points in 2D space
Shifts coords by the provided value
*/
void jinx::Sqr::shift(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4)
{
	x1 += _x1;
	x2 += _x2;
	y1 += _y1;
	y2 += _y2;
	x3 += _x3;
	x4 += _x4;
	y3 += _y3;
	y4 += _y4;
} // !shift

/*
Retrieve the type of the Shape
*/
std::string jinx::Sqr::getType()
{
	return switchTypes(type);
} // !getType

/*
Scale X coords by the provided multiplyer
*/
void jinx::Sqr::scaleX(int _x)
{
	x1 *= _x;
	x2 *= _x;
	x3 *= _x;
	x4 *= _x;
} // !scaleX

/*
Scale Y coords by the provided multiplyer
*/
void jinx::Sqr::scaleY(int _y)
{
	y1 *= _y;
	y2 *= _y;
	y3 *= _y;
	y4 *= _y;
} // !scaleY

/*
Scale both axes by the privided mult
*/
void jinx::Sqr::scale(int _s)
{
	x1 *= _s;
	x2 *= _s;
	y1 *= _s;
	y2 *= _s;
	x3 *= _s;
	x4 *= _s;
	y3 *= _s;
	y4 *= _s;
} // !scale

/*
Get shape's square value
*/
double jinx::Sqr::getSquare()
{
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);

	return a * b;
} // !getSquare