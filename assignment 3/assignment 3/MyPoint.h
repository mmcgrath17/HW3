#include <iostream>
#include <cmath>

using namespace std;

class MyPoint
{

private:
	double x, y;

public:
	MyPoint()
	{
		x = 0;
		y = 0;
	}

	MyPoint(double a, double b)
	{
		x = a;
		y = b;
	}

	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}

	double distance(MyPoint a1)
	{
		//((y1-y2)^2+(x1-x2)^2)^.5 distance formula
		double yval = pow(y - a1.getY(), 2);
		double xval = pow(x - a1.getX(), 2);

		return pow(yval + xval, .5);
	}


};