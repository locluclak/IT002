#include "CDiem.h"
#include "iostream"
using namespace std;

CDiem::CDiem(float a, float b)
{
	x = a;
	y = b;
}

CDiem::CDiem(const CDiem& A)
{
	this->x = A.x;
	this->y = A.y;
}

void CDiem::Setx(const float& a)
{
	this->x = a;
}

void CDiem::Sety(const float& b)
{
	this->y = b;
}

CDiem::~CDiem()
{

}
float CDiem::Getx() const
{
	return this->x;
}

float CDiem::Gety() const
{
	return this->y;
}

istream& operator>>(istream& is, CDiem& a)
{
	cout << "Nhap hoanh do: ";
	is >> a.x;
	cout << "Nhap tung do: ";
	is >> a.y;
	return is;
}

ostream& operator<<(ostream& m, const CDiem& a)
{
	m << "(" << a.Getx() << ", " << a.Gety() << ")";
	return m;
}
CDiem& CDiem::operator=(const CDiem& a)
{
	this->x = a.Getx();
	this->y = a.Gety();
	return *this;
}

bool CDiem::operator==(const CDiem& a) const
{
	return (x == a.Getx() && y == a.Gety());
}
bool CDiem::operator!=(const CDiem& a) const
{
	return !(*this == a);
}