//Matt McGrath
#include "MyPoint.h"
#include "LinearEquation.h"
#include <algorithm>
#include <string>

string sort(string & s)
{
	string str = s;
	sort(s.begin(), s.end());
	return s;
}

int main()
{
	//ex_01
	MyPoint m1();
	MyPoint m2(10, 30.5);
	cout << "The distance between these points is: " << m1().distance(m2);
	//ex_02
	double a, b, c, d, e, f;
	cout << "\n\nEnter a value for each six variables.\n";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;

	LinearEquation l1(a, b, c, d, e, f);
	if (!(l1.isSolvable()))
	{
		cout << "The equation has no solution.\n";
	}
	//ex_03
	double px1, px2, px3, px4, py1, py2, py3, py4;
	cout << "Enter 2 endpoints and 2 start points.\n";
	cin >> px1;
	cin >> px2;
	cin >> px3;
	cin >> px4;
	cin >> py1;
	cin >> py2;
	cin >> py3;
	cin >> py4;

	//ex_04
	cout << "Enter a word.\n";
	string word;
	cin >> word;
	cout << sort(word);

}