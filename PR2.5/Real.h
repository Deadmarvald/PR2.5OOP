#pragma once

#include <iostream>
#include "Number.h"

using namespace std;

class Real
{
private:
	double KorStep;
	Number number;

public:
	Real();
	Real(double KorStep, Number number);
	Real(const Real& x);
	~Real();

	double GetKorStep() { return KorStep; }
	Number GetNumper() { return number; }

	void SetKorStep(double KorStep) { this->KorStep = KorStep; }
	void SetNumber(Number number) { this->number = number; }

	Real& operator = (const Real&);
	operator string();

	friend ostream& operator << (ostream&, Real&);
	friend istream& operator >> (istream&, Real&);

	Real& operator ++();
	Real& operator --();
	Real operator ++(int);
	Real operator --(int);

	double Root(double KorStep);
	double DegPi(int KorStep);
};