#include "Number.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Number::Number()
{
	firstNum = 0;
	secondNum = 0;
}

Number::Number(double firstNum, double secondNum)
{
	this->firstNum = firstNum;
	this->secondNum = secondNum;
}

Number::Number(const Number& num)
{
	this->firstNum = num.firstNum;
	this->secondNum = num.secondNum;
}

Number::~Number()
{ }

Number& Number::operator = (const Number& x)
{
	firstNum = x.firstNum;
	secondNum = x.secondNum;

	return *this;
}

Number::operator string () const
{
	stringstream sout;
	sout << endl;
	sout << "First Number = "<<firstNum << endl;
	sout << "Second Number = " << secondNum << endl;

	return sout.str();
}

Number operator -(const Number& a, const Number& b)
{
	return Number(a.firstNum - b.firstNum, a.secondNum - b.secondNum);
}

Number operator *(const Number& a, const Number& b)
{
	return Number(a.firstNum * b.firstNum, a.secondNum * b.secondNum);
}

ostream& operator << (ostream& out, const Number& x)
{
	out << string(x);

	return out;
}

istream& operator >> (istream& in, Number& x)
{
	cout << endl;
	cout << " First Number = "; in >> x.firstNum;
	cout << " Second Number = "; in >> x.secondNum;
	cout << endl;

	return in;
}

Number& Number::operator ++()
{
	firstNum++;
	secondNum++;

	return *this;
}

Number& Number::operator --()
{
	firstNum--;
	secondNum--;

	return *this;
}

Number Number::operator ++(int)
{
	Number t(*this);
	firstNum++;
	secondNum++;

	return t;
}

Number Number::operator --(int)
{
	Number t(*this);
	firstNum--;
	secondNum--;

	return t;
}