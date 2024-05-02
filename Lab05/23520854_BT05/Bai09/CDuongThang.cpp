#include "CDuongThang.h"
#include <iostream>
using namespace std;

CDuongThang::CDuongThang(float a, float b)
{
	heso[0] = a;
	heso[1] = b;
}

CDuongThang::~CDuongThang()
{}

ostream& operator<<(ostream& os, const CDuongThang& a)
{
	os << "y=" << a.heso[0] << "x+" << a.heso[1];
	return os;
}

CDuongThang& CDuongThang::operator=(const CDuongThang& a)
{
	this->heso[0] = a.heso[0];
	this->heso[1] = a.heso[1];
	return *this;
}