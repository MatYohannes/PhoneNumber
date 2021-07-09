#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
using std::ostream;
using std::istream;

#include <string>
using std::string;

class PhoneNumber
{
	friend ostream& operator << (ostream& output, const PhoneNumber& digits);

	friend istream& operator >> (istream& input, PhoneNumber& digits);
	

private:
	string areaCode;
	string exchange;
	string line;
};


#endif // !PHONENUMBER_H
