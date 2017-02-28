#include <iostream>
#include <cmath>

using namespace std;

class LinearEquation
{
private:
	double a, b, c, d, e, f;
public:
	LinearEquation(double a1, double b1, double c1, double d1, double e1, double f1)
	{
		a = a1;
		b = b1;
		c = c1;
		d = d1;
		e = e1;
		f = f1;
	}
	double getA()
	{
		return a;
	}
	double getB()
	{
		return b;
	}
	double getC()
	{
		return c;
	}
	double getD()
	{
		return d;
	}
	double getE()
	{
		return e;
	}
	double getF()
	{
		return f;
	}

	bool isSolvable()
	{
		if (a*d - b*c == 0)
		{
			return false;
		}
		else
			return true;
	}
	double getX()
	{
		return ((e*d - b*f) / (a*d - b*c));
	}
	double getY()
	{
		return ((a*f - e*c) / (a*d - b*c));
	}


};