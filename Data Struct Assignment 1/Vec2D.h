/****************************************************************************************/
/*!

\file Vec2D.g
\Author Wong Keng Han Ashley
\par 155135S@mymail.nyp.edu.sg
\brief

Struct to Difine a 2D Vector

*/
/****************************************************************************************/

#ifndef _VEC2D_H
#define _VEC2D_H


/****************************************************************************************/
/*!

\brief

Struct to define 2D Vectors

*/
/****************************************************************************************/
struct Vec2D{

public:
	//Constructor
	Vec2D();
	Vec2D(double x1, double y1);

	//Destructor
	virtual ~Vec2D();

	double x;
	double y;



};


#endif