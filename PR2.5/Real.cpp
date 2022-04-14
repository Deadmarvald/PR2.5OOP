#include "Real.h"
#include "Number.h"
#include <math.h>
#define M_PI 3.14159265358979323846

Real::Real()
{
	KorStep = 0;
	number;
}

Real::Real(double KorStep, Number number)
{
	this->KorStep = KorStep;
	this->number = number;
}

Real::Real(const Real& x)
{
	this->KorStep = x.KorStep;
	this->number = x.number;
}

Real::~Real()
{ }

Real& Real::operator =(const Real& x)
{
	KorStep = x.KorStep;
	number = x.number;

	return *this;
}

Real::operator string()
{
	stringstream ss;
	ss << endl;
	ss << "The root of the " << KorStep << "th degree of a "
		<< number.GetFirstNum() << " = " << Root(KorStep) << endl;
	ss << KorStep << " degree of the number pi = " << DegPi(KorStep) << endl;
	ss << number.GetFirstNum() << " - " << number.GetSecondNum() << " = " << number.GetFirstNum() - number.GetSecondNum() << endl;
	ss << number.GetFirstNum() << " * " << number.GetSecondNum() << " = " << number.GetFirstNum() * number.GetSecondNum() << endl;

	return ss.str();
}

ostream& operator << (ostream& out, Real& x)
{
	out << string(x);

	return out;
}

istream& operator >> (istream& in, Real& x)
{
	cout << endl;
	cout << "Degree of root = "; in >> x.KorStep;
	cout << "Number:"; in >> x.number;
	cout << endl;

	return in;
}

Real& Real::operator ++()
{
	KorStep++;

	return *this;
}

Real& Real::operator --()
{
	KorStep--;

	return *this;
}

Real Real::operator ++(int)
{
	Real t(*this);
	KorStep++;

	return t;
}

Real Real::operator --(int)
{
	Real t(*this);
	KorStep--;

	return t;
}

double Real::Root(double KorStep)
{
	return pow(number.GetFirstNum(), (1. / KorStep));
}

double Real::DegPi(int KorStep)
{
	return pow(M_PI, KorStep);
}