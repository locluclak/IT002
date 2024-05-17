#pragma once
#include "../Bai03/CDiem.h"
#include <iostream>
using namespace std;

class CHinhCau
{
private:
	CDiem tam;
	float bankinh;
public:
	friend istream& operator >> (istream&, CHinhCau&);
	friend ostream& operator << (ostream&, const CHinhCau&);
	bool operator == (const CHinhCau&) const;
	bool operator != (const CHinhCau&) const;
};

