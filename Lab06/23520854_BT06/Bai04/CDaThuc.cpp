#include "CDaThuc.h"
#include "iostream"
using namespace std;

istream& operator>>(istream& m, CDaThuc& a)
{
	cout << "Nhap so mu: ";
	m >> a.somu;
	for (int i = a.somu; i >= 0; i--)
	{
		cout << "Nhap he so x^" << i << ": ";
		m >> a.arr[i];
	}

	return m;
}
ostream& operator<<(ostream& m, const CDaThuc& a)
{
	m << "f(x) = ";
	for (int i = a.somu; i >= 0; i--)
	{
		if (i == 0)
		{

			m << a.arr[i];
			break;
		}
		m << a.arr[i] << "x^" << i << " + ";
	}
	return m;
}

