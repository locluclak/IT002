#include "CDonThuc.h"
#include <iostream>
using namespace std;

CDonThuc::CDonThuc(int a, float b)
{
	heso = a;
	somu = b;
}

CDonThuc::~CDonThuc()
{}

ostream& operator<<(ostream& os, const CDonThuc& f)
{
	os << f.heso << "x^" << f.somu;
	return os;
}

CDonThuc& CDonThuc::operator=(const CDonThuc& f)
{
	this->heso = f.heso;
	this->somu = f.somu;
	return *this;
}




