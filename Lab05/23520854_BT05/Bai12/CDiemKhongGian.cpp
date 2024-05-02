#include "CDiemKhongGian.h"
#include "iostream"
using namespace std;

CDiemKhongGian::CDiemKhongGian(float a, float b, float c)
{
	this->x = a;
	this->y = b;
	this->z = c;

}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& A)
{

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

}

float CDiemKhongGian::Getx() const
{
	return this->x;
}

float CDiemKhongGian::Gety() const
{
	return this->y;
}
float CDiemKhongGian::Getz() const
{
	return this->z;
}

ostream& operator<<(ostream& m, const CDiemKhongGian& a)
{
	m << "(" << a.Getx() << ", " << a.Gety() << ", " << a.Getz() << ")";
	return m;
}
CDiemKhongGian& CDiemKhongGian::operator=(const CDiemKhongGian& a)
{
	this->x = a.Getx();
	this->y = a.Gety();
	this->z = a.Getz();
	return *this;
}
