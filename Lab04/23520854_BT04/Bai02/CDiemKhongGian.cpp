#include "CDiemKhongGian.h"
#include "iostream"
using namespace std;

CDiemKhongGian::CDiemKhongGian(float a, float b)
{
	this->x = a;
	this->y = b;
	cout << "Goi PT khoi tao.\n";
}
CDiemKhongGian::~CDiemKhongGian()
{
	cout << "Goi PT pha huy.\n";
}