#include "CDiemKhongGian.h"
#include "CHinhCau.h"
#include <iostream>
using namespace std;

CHinhCau::CHinhCau(const CDiemKhongGian& A, float bankinh)
{
	this->O = A;
	this->bankinh = bankinh;
}

CHinhCau::CHinhCau(float x, float y, float z, float bankinh)
{
	this->O.Setx(x);
	this->O.Sety(y);
	this->O.Setz(z);
}

CHinhCau::~CHinhCau()
{}

ostream& operator<<(ostream& os, const CHinhCau& C)
{
	os << "Hinh cau tam " << C.O << " ban kinh " << C.bankinh;
	return os;
}

CHinhCau& CHinhCau::operator=(const CHinhCau& C)
{
	this->O = C.O;
	this->bankinh = C.bankinh;
	return *this;
}
