#include "CThoiGian.h"
#include <iostream>
using namespace std;

CThoiGian::CThoiGian(int a, int b, int c)
{
	gio = a;
	phut = b;
	giay = c;
}

CThoiGian::~CThoiGian()
{}

int CThoiGian::getGio() const
{
	return gio;
}
int CThoiGian::getPhut() const
{
	return phut;
}
int CThoiGian::getGiay() const
{
	return giay;
}

istream& operator>>(istream& m, CThoiGian& a)
{
	cout << "Nhap gio: ";
	m >> a.gio;

	cout << "Nhap phut: ";
	m >> a.phut;

	cout << "Nhap giay: ";
	m >> a.giay;

	return m;
}

ostream& operator<<(ostream& os, const CThoiGian& t)
{
	if (t.gio > 9)
		os << t.gio << ':';
	else
		os << 0 << t.gio << ':';
	if (t.phut > 9)
		os << t.phut << ':';
	else
		os << 0 << t.phut << ':';
	if (t.giay > 9)
		os << t.giay;
	else os << 0 << t.giay;
	return os;
}

bool CThoiGian::operator==(const CThoiGian& a) const
{
	return (giay == a.getGiay() && phut == a.getPhut() && gio == a.getGio());
}
bool CThoiGian::operator!=(const CThoiGian& a) const
{
	return !(*this == a);
}