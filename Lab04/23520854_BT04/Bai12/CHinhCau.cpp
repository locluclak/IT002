#include "CDiemKhongGian.h"
#include "CHinhCau.h"
#include <iostream>
using namespace std;

CHinhCau::CHinhCau(const CDiemKhongGian& A, float bankinh)
{
	cout << "Goi phuong thuc khoi tao 1.\n";
	this->O = A;
	this->bankinh = bankinh;
}

CHinhCau::CHinhCau(float x, float y, float z, float bankinh)
{
	cout << "Goi phuong thuc khoi tao 2.\n";
	this->O.Setx(x);
	this->O.Sety(y);
	this->O.Setz(z);
}

CHinhCau::~CHinhCau()
{
	cout << "Goi PT pha huy.\n";
}