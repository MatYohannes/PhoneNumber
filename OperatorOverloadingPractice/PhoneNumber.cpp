
#include <iostream>
#include <string>
#include "PhoneNumber.h"
#include <iomanip>
using std::ostream;
using std::istream;
using std::setw;



ostream& operator << (ostream& output, const PhoneNumber& digits)
{
	output << "(" << digits.areaCode << ") " << digits.exchange << "-" << digits.line;

	return output;
}

istream& operator >> (istream& input, PhoneNumber& digits)
{
	input.ignore();
	input >> setw(3) >> digits.areaCode;
	input.ignore(2);
	input >> setw(3) >> digits.exchange;
	input.ignore();
	input >> setw(4) >> digits.line;



	return input;
}


