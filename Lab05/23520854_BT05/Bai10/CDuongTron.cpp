#include "CDuongTron.h"
#include "../Bai01/CDiem.h"
#include <iostream>
using namespace std;

CDuongTron::CDuongTron(const CDiem& O, float bankinh)
{
	this->O = O;
	this->bankinh = bankinh;
}

CDuongTron::CDuongTron(float x, float y, float bankinh)
{
	this->O.Setx(x);
	this->O.Sety(y);
	this->bankinh = bankinh;
}

CDuongTron::~CDuongTron()
{}

ostream& operator<<(ostream& os, const CDuongTron& C)
{
	os << "Duong tron tam " << C.O << " ban kinh " << C.bankinh;
	return os;
}

CDuongTron& CDuongTron::operator=(const CDuongTron& C)
{
	this->O = C.O;
	this->bankinh = C.bankinh;
	return *this;
}