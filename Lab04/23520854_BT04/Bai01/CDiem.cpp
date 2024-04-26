#include "CDiem.h"
#include "iostream"
using namespace std;

CDiem::CDiem()
{
	this->dToan = 0;
	this->dVan = 0;
	this->dTB = 0;
	cout << "Goi PT khoi tao 1.\n";
}
CDiem::CDiem(int a, int b)
{
	this->dToan = a;
	this->dVan = b;
	this->dTB = (a + b) / 2;
	cout << "Goi PT khoi tao 2.\n";
}
CDiem::~CDiem()
{
	cout << "Goi PT pha huy.\n";
}