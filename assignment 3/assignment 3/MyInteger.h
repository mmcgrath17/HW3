#include <iostream>

using namespace std;

class MyInteger
{
private:
	int value;

	MyInteger(int a)
	{
		value = a;
	}
	const int getVal()
	{
		return value;
	}
	const bool isOdd()
	{
		if (value % 2 == 0)
			return false;
		else
			return true;
	}
	const bool isEven()
	{
		if (value % 2 == 0)
			return true;
		else
			return false;
	}
	const bool isPrime()
	{
		for (int i = 2; i < value; i++)
		{
			if (value%i == 0)
				return false;
		}
		return true;
	}
	static bool isEven(const MyInteger& a)
	{
		int val = a.getVal();
		if (val % 2 == 0)
			return true;
		else
			return false;
	}
	static bool isOdd(const MyInteger& a) 
	{
		int val = a().getVal();
	if (val % 2 == 0)
		return false;
	else
		return true;
}
	static bool isPrime(const MyInteger& a) 
	{
		int val = a()->getVal();
		for (int i = 2; i < val; i++)
		{
			if (val%i == 0)
				return false;
		}
		return true;
	}

	bool equals(int a)
	{
		if (a == value)
			return true;
		else
			return false;
	}

	bool equals(const MyInteger& a)
	{
		int val = a().getVal();
		if (val == value)
			return true;
		else
			return false;
	}
	static int parseInt(const string& s)
	{
		return s()->size();
	}
};