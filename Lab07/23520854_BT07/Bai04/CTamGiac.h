#pragma once
#include "../Bai03/CDiem.h"
#include <iostream>
using namespace std;

class CTamGiac
{
private:
	CDiem A;
	CDiem B;
	CDiem C;
public:
	friend istream& operator >> (istream&, CTamGiac&);
	friend ostream& operator << (ostream&, const CTamGiac&);
	bool operator == (const CTamGiac&) const;
	bool operator != (const CTamGiac&) const;
};

