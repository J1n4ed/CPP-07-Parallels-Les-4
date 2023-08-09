// fixed source for separated cylinder functionality

#include "../headers/cylinder.h"

/*
Default constructor for class Cylinder
Takes X,Y coors of center point in 3D space plus Radius in double
*/
jinx::Cylinder::Cylinder(int _x1, int _y1, double _rad, double _height) : x1(_x1), y1(_y1), rad(_rad), height(_height) {}

/*
Get shape's square value
*/
double jinx::Cylinder::getSquare()
{
	return M_PI * rad * rad + 2 * rad * height;
} // !getSquare

/*
Retrieve the type of the Shape
*/
std::string jinx::Cylinder::getType()
{
	return switchTypes(type);
} // !getType

/*
Method to change the coords of the Cylinder in 3D space
Shifts coords by the provided value
*/
void jinx::Cylinder::shift(int _x1, int _y1, double _rad, double _height)
{
	x1		+= _x1;
	y1		+= _y1;
	rad		+= _rad;
	height	+= _height;
} // !shift

/*
Scale X coords by the provided mult
*/
void jinx::Cylinder::scaleX(int _x)
{
	x1 *= _x;
} // !scaleX

/*
Scale Y coords by the provided mult
*/
void jinx::Cylinder::scaleY(int _y)
{
	y1 *= _y;
} // !scaleY

/*
Scale radius by the provided mult
*/
void jinx::Cylinder::scaleRad(int _rad)
{
	rad *= _rad;
} // !scaleRad

/*
Scale height by the provided mult
*/
void jinx::Cylinder::scaleHeight(int _height)
{
	height *= _height;
} // !scaleRad

/*
Scale both axes, radius and height by the privided mult
*/
void jinx::Cylinder::scale(int _s)
{
	x1		*= _s;
	y1		*= _s;
	rad		*= _s;
	height	*= _s;
} // !scale

/*
Get shape's volume value
*/
double jinx::Cylinder::getVolume()
{
	return M_PI * rad * rad * height;
} // !getVolume

/*
Get shape's height value
*/
double jinx::Cylinder::getHeight()
{
	return height;
} // !getHeight

/*
Get shape's radius value
*/
double jinx::Cylinder::getRadius()
{
	return rad;
}