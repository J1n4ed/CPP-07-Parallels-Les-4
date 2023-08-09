// test main function

#include <iostream>
#include <memory>

// original headers

#include "..\shape.h"
#include "..\transform.h"

// fixed headers (namespace jinx)

#include "..\headers\line.h"
#include "..\headers\sqr.h"
#include "..\headers\cube.h"
#include "..\headers\circle.h"
#include "..\headers\cylinder.h"

int main(int argc, char** argv)
{
	// local vars

	// original code vars

	//            type     x1 y1 z1 x2 y2 z2 x3 y3 z3 x4 y4 z4 x5 y5 z5 x6 y6 z6 x7 y7 z7 x8 y8 z8
	Shape line(Shape::line, 1, 1, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Shape squre(Shape::sqr, 1, 1, 0, 2, 2, 0, 3, 3, 0, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Shape cube(Shape::cube, 1, 1, 2, 2, 2, 2, 3, 3, 2, 4, 4, 2, 5, 5, 2, 6, 6, 2, 7, 7, 2, 8, 8, 2);

	//                    type         x1 y1  RAD  HGHT	
	Shape circle	(Shape::circle,		1, 1, 1.5, 0.0);
	Shape cylinder	(Shape::cylinder,	2, 2, 1.5, 2.5);

	// fixed code vars
	
	jinx::Shape * fix_line		= new jinx::Line	(1, 1, 2, 2);	
	jinx::Shape * fix_sqr		= new jinx::Sqr		(1, 1, 2, 2, 3, 3, 4, 4);
	jinx::Shape * fix_cube		= new jinx::Cube	(1, 1, 2, 2, 2, 2, 3, 3, 2, 4, 4, 2, 5, 5, 2, 6, 6, 2, 7, 7, 2, 8, 8, 2);
	jinx::Shape * fix_circle	= new jinx::Circle	(1, 1, 1.5);
	jinx::Shape * fix_cylinder	= new jinx::Cylinder(2, 2, 1.5, 2.5);

	// body

	std::cout << "Test run start.\n\n";

	// original files test
	
	std::cout << "-- Original code results --\n\n";		

	std::cout << "line type: "			<< line.getType()	<< '\n';
	std::cout << "line square: "		<< line.square		<< '\n';
	std::cout << "line height: "		<< line.height		<< '\n';
	std::cout << "line radius: "		<< line.radius		<< '\n';
	std::cout << "line volume: "		<< line.volume		<< '\n';

	std::cout << '\n';

	std::cout << "squre type: "			<< squre.getType()	<< '\n';
	std::cout << "squre square: "		<< squre.square		<< '\n';
	std::cout << "squre height: "		<< squre.height		<< '\n';
	std::cout << "squre radius: "		<< squre.radius		<< '\n';
	std::cout << "squre volume: "		<< squre.volume		<< '\n';

	std::cout << '\n';

	std::cout << "cube type: "			<< cube.getType()	<< '\n';
	std::cout << "cube square: "		<< cube.square		<< '\n';
	std::cout << "cube height: "		<< cube.height		<< '\n';
	std::cout << "cube radius: "		<< cube.radius		<< '\n';
	std::cout << "cube volume: "		<< cube.volume		<< '\n';

	std::cout << '\n';

	std::cout << "circle type: "		<< circle.getType()		<< '\n';
	std::cout << "circle square: "		<< circle.square		<< '\n';
	std::cout << "circle height: "		<< circle.height		<< '\n';
	std::cout << "circle radius: "		<< circle.radius		<< '\n';
	std::cout << "circle volume: "		<< circle.volume		<< '\n';

	std::cout << '\n';

	std::cout << "cylinder type: "		<< cylinder.getType()	<< '\n';
	std::cout << "cylinder square: "	<< cylinder.square		<< '\n';
	std::cout << "cylinder height: "	<< cylinder.height		<< '\n';
	std::cout << "cylinder radius: "	<< cylinder.radius		<< '\n';
	std::cout << "cylinder volume: "	<< cylinder.volume		<< '\n';

	std::cout << '\n' << '\n';

	// fixed files test

	std::cout << "-- Fixed code results --\n\n";

	std::cout << "fixed line type: "	<< fix_line->getType()		<< '\n';
	std::cout << "fixed line square: "	<< fix_line->getSquare()	<< '\n';
	std::cout << "fixed line height: "	<< fix_line->getHeight()	<< '\n';
	std::cout << "fixed line radius: "	<< fix_line->getRadius()	<< '\n';
	std::cout << "fixed line volume: "	<< fix_line->getVolume()	<< '\n';
	
	std::cout << '\n';

	std::cout << "fixed sqr type: "		<< fix_sqr->getType()		<< '\n';
	std::cout << "fixed sqr square: "	<< fix_sqr->getSquare()		<< '\n';
	std::cout << "fixed sqr height: "	<< fix_sqr->getHeight()		<< '\n';
	std::cout << "fixed sqr radius: "	<< fix_sqr->getRadius()		<< '\n';
	std::cout << "fixed sqr volume: "	<< fix_sqr->getVolume()		<< '\n';

	std::cout << '\n';

	std::cout << "fixed cube type: "	<< fix_cube->getType()		<< '\n';
	std::cout << "fixed cube square: "	<< fix_cube->getSquare()	<< '\n';
	std::cout << "fixed cube height: "	<< fix_cube->getHeight()	<< '\n';
	std::cout << "fixed cube radius: "	<< fix_cube->getRadius()	<< '\n';
	std::cout << "fixed cube volume: "	<< fix_cube->getVolume()	<< '\n';

	std::cout << '\n';

	std::cout << "fixed circle type: "		<< fix_circle->getType()	<< '\n';
	std::cout << "fixed circle square: "	<< fix_circle->getSquare()	<< '\n';
	std::cout << "fixed circle height: "	<< fix_circle->getHeight()	<< '\n';
	std::cout << "fixed circle radius: "	<< fix_circle->getRadius()	<< '\n';
	std::cout << "fixed circle volume: "	<< fix_circle->getVolume()	<< '\n';

	std::cout << '\n';

	std::cout << "fixed cylinder type: "	<< fix_cylinder->getType()		<< '\n';
	std::cout << "fixed cylinder square: "	<< fix_cylinder->getSquare()	<< '\n';
	std::cout << "fixed cylinder height: "	<< fix_cylinder->getHeight()	<< '\n';
	std::cout << "fixed cylinder radius: "	<< fix_cylinder->getRadius()	<< '\n';
	std::cout << "fixed cylinder volume: "	<< fix_cylinder->getVolume()	<< '\n';

	// CLEAR	

	// delete fix_line;
	// delete fix_sqr;

	// exit from main

	std::cout << "\nTest run exit." << std::endl;
	std::system("pause");
	return EXIT_SUCCESS;

} // !main