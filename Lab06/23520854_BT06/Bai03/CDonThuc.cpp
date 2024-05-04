#include "CDonThuc.h"
#include "iostream"
using namespace std;

istream& operator>>(istream& m, CDonThuc& y)
{
	cout << "He so: ";
	m >> y.heso;
	cout << "Somu: ";
	m >> y.somu;
	return m;
}
ostream& operator<<(ostream& m, CDonThuc a)
{
	m << a.heso << "x^" << a.somu;
	return m;
}