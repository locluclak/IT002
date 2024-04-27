#include "../Bai01/CDiem.h"
#include "CTamGiac.h"
#include <iostream>
using namespace std;

CTamGiac::CTamGiac(const CDiem& A, const CDiem& B, const CDiem& C)
{
	cout << "Goi PT khoi tao 1.\n";
	this->A = A;
	this->B = B;
	this->C = C;
}

CTamGiac::CTamGiac(float a, float b, float c, float d, float e, float f)
{
	cout << "Goi PT khoi tao 2.\n";
	A.Setx(a);
	A.Sety(b);
	B.Setx(c);
	B.Sety(d);
	C.Setx(e);
	C.Sety(f);
}

CTamGiac::~CTamGiac()
{
	cout << "Goi PT pha huy.\n";
}