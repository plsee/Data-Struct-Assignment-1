#ifndef _VEC2D_H
#define _VEC2D_H

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