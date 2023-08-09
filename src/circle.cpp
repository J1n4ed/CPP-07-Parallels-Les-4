// fixed source for separated circle functionality

#include "../headers/circle.h"

/*
Default constructor for class Circle
Takes X,Y coors of center point in 2D space plus Radius in double
*/
jinx::Circle::Circle(int _x1, int _y1, double _rad) : x1(_x1), y1(_y1), rad(_rad) {}

/*
Get shape's square value
*/
double jinx::Circle::getSquare()
{
	return M_PI * static_cast<double>(rad) * static_cast<double>(rad);
} // !getSquare

/*
Retrieve the type of the Shape
*/
std::string jinx::Circle::getType()
{
	return switchTypes(type);
} // !getType

/*
Method to change the coords of the Circle points in 2D space
Shifts coords by the provided value
*/
void jinx::Circle::shift(int _x1, int _y1, double _rad)
{
	x1 += _x1;
	y1 += _y1;
	rad += _rad;
} // !shift

/*
Scale X coords by the provided mult
*/
void jinx::Circle::scaleX(int _x)
{
	x1 *= _x;
} // !scaleX

/*
Scale Y coords by the provided mult
*/
void jinx::Circle::scaleY(int _y)
{
	y1 *= _y;
} // !scaleY

/*
Scale radius by the provided mult
*/
void jinx::Circle::scaleRad(int _rad)
{
	rad *= _rad;
} // !scaleRad

/*
Scale both axes and radius by the privided mult
*/
void jinx::Circle::scale(int _s)
{
	x1 *= _s;
	y1 *= _s;
	rad *= _s;
} // !scale

/*
Get shape's radius value
*/
double jinx::Circle::getRadius()
{
	return rad;
}