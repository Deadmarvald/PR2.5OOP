#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Number
{
private:
	double firstNum, secondNum;

public:
	Number();
	Number(double firstNum, double secondNum);
	Number(const Number& num);
	~Number();

	double GetFirstNum() { return firstNum; }
	void SetFirstNum(double firstNum) { this->firstNum = firstNum; }
	double GetSecondNum() { return secondNum; }
	void SetSecondNum(double secondNum) { this->secondNum = secondNum; }

	Number& operator = (const Number&);
	operator string() const;

	friend Number operator -(const Number&, const Number&);
	friend Number operator *(const Number&, const Number&);

	friend ostream& operator << (ostream&, const Number&);
	friend istream& operator >> (istream&, Number&);

	Number& operator ++();
	Number& operator --();
	Number operator ++(int);
	Number operator --(int);
};