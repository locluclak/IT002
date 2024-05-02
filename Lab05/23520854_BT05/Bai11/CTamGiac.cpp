#include "CDiem.h"
#include "CTamGiac.h"
#include <iostream>
using namespace std;

CTamGiac::CTamGiac(const CDiem& A, const CDiem& B, const CDiem& C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

CTamGiac::CTamGiac(float a, float b, float c, float d, float e, float f)
{
	A.Setx(a);
	A.Sety(b);
	B.Setx(c);
	B.Sety(d);
	C.Setx(e);
	C.Sety(f);
}

CTamGiac::~CTamGiac()
{}

ostream& operator<<(ostream& os, const CTamGiac& A)
{
	os << "Tam giac co 3 dinh " << A.A << ", " << A.B << ", " << A.C;
	return os;
}

CTamGiac& CTamGiac::operator=(const CTamGiac& A)
{
	this->A = A.A;
	this->B = A.B;
	this->C = A.C;
	return *this;
}