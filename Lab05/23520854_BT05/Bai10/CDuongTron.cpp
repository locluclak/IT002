#include "CDuongTron.h"
#include "../Bai01/CDiem.h"
#include <iostream>
using namespace std;

CDuongTron::CDuongTron(const CDiem& O, float bankinh)
{
	cout << "Goi PT khoi tao 1.\n";
	this->O = O;
	this->bankinh = bankinh;
}

CDuongTron::CDuongTron(float x, float y, float bankinh)
{
	cout << "Goi PT khoi tao 2.\n";
	this->O = x;
	this->O = y;
	this->bankinh = bankinh;
}

CDuongTron::~CDuongTron()
{
	cout << "Goi PT pha huy.\n";
}