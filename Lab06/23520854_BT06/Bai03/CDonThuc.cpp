#include "CDonThuc.h"
#include "iostream"
using namespace std;

istream& operator>>(istream& m, CDonThuc& y)
{
	cout << "Nhap he so: ";
	m >> y.heso;
	cout << "Nhap so mu: ";
	m >> y.somu;
	return m;
}

ostream& operator<<(ostream& m, CDonThuc a)
{
	m << "f(x) = " << a.heso << "x^" << a.somu;
	return m;
}

CDonThuc CDonThuc::operator*(const CDonThuc& a)
{
	CDonThuc res;
	res.heso = this->heso * a.heso;
	res.somu = this->somu + a.somu;
	return res;
}

CDonThuc CDonThuc::operator/(const CDonThuc& a)
{
	CDonThuc res;
	res.heso = this->heso / a.heso;
	res.somu = this->heso / a.heso;
	return res;
}

CDonThuc& CDonThuc::operator*=(const CDonThuc& a)
{
	this->heso = this->heso * a.heso;
	this->somu = this->somu + a.somu;
	return *this;
}

CDonThuc& CDonThuc::operator/=(const CDonThuc& a)
{
	this->heso = this->heso / a.heso;
	this->somu = this->somu - a.somu;
	return *this;
}