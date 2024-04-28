#include "CDiemKhongGian.h"
#include "iostream"
using namespace std;

CDiemKhongGian::CDiemKhongGian(float a, float b, float c)
{
	this->x = a;
	this->y = b;
	this->z = c;
	cout << "Goi PT khoi tao 1.\n";
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& A)
{
	cout << "Goi PT khoi tao 2.\n";
	this->x = A.x;
	this->y = A.y;
	this->z = A.z;
}

void CDiemKhongGian::Setx(float a)
{
	this->x = a;
}

void CDiemKhongGian::Sety(float a)
{
	this->y = a;
}

void CDiemKhongGian::Setz(float a)
{
	this->z = a;
}

CDiemKhongGian::~CDiemKhongGian()
{
	cout << "Goi PT pha huy.\n";
}