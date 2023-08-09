// fixed source for separated line functionality

#include "../headers/line.h"

/*
Default constructor for class Line
Takes X,Y coors of for two points in 2D space
*/
jinx::Line::Line(int _x1, int _y1, int _x2, int _y2) : x1(_x1), x2(_x2), y1(_y1), y2(_y2) {}

/*
Method to change the coords of the Line points in 2D space
Shifts coords by the provided value
*/
void jinx::Line::shift(int _x1, int _y1, int _x2, int _y2)
{
	x1 += _x1;
	x2 += _x2;
	y1 += _y1;
	y2 += _y2;
} // !shift

/*
Retrieve the type of the Shape
*/
std::string jinx::Line::getType()
{
	return switchTypes(type);
} // !getType

/*
Scale X coords by the provided multiplyer
*/
void jinx::Line::scaleX(int _x)
{
	x1 *= _x;
	x2 *= _x;
} // !scaleX

/*
Scale Y coords by the provided multiplyer
*/
void jinx::Line::scaleY(int _y)
{
	y1 *= _y;
	y2 *= _y;
} // !scaleY

/*
Scale both axes by the privided mult
*/
void jinx::Line::scale(int _s)
{
	x1 *= _s;
	x2 *= _s;
	y1 *= _s;
	y2 *= _s;
} // !scale