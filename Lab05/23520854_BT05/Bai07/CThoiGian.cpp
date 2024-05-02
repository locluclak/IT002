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

CThoiGian& CThoiGian::operator=(const CThoiGian& t)
{
	this->gio = t.gio;
	this->phut = t.phut;
	this->giay = t.giay;
	return *this;
}
