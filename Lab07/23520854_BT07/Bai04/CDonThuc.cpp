#include "CDonThuc.h"
#include <iostream>
using namespace std;

CDonThuc::CDonThuc(int a, float b)
{
	somu = a;
	heso = b;
}

CDonThuc::~CDonThuc()
{}

istream& operator>>(istream& m, CDonThuc& a)
{
	cout << "Nhap so mu: ";
	m >> a.somu;
	cout << "Nhap he so: ";
	m >> a.heso;
	return m;
}

float CDonThuc::getHeSo() const
{
	return heso;
}
int CDonThuc::getSoMu() const
{
	return somu;
}
bool CDonThuc::operator==(const CDonThuc& a) const
{
	return (heso == a.getHeSo() && somu == a.getSoMu());
}
bool CDonThuc::operator!=(const CDonThuc& a) const
{
	return !(*this == a);
}