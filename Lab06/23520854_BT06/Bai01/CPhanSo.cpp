#include "CPhanSo.h"
#include "iostream"
using namespace std;

CPhanSo::CPhanSo()
{
	this->tu = 0;
	this->mau = 1;
}

CPhanSo::CPhanSo(int a, int b)
{
	this->tu = a;
	this->mau = b;
}

istream& operator>>(istream& m, CPhanSo& a)
{
	cout << "Nhap tu: ";
	m >> a.tu;
	cout << "Nhap mau: ";
	m >> a.mau;
	return m;
}
ostream& operator<<(ostream& m, CPhanSo a)
{
	m << a.tu << '/' << a.mau << endl;
	return m;
}

int CPhanSo::GetTu() const
{
	return this->tu;
}

int CPhanSo::GetMau() const
{
	return this->mau;
}

CPhanSo& CPhanSo::operator=(const CPhanSo& a)
{
	tu = a.GetTu();
	mau = a.GetMau();
	return *this;
}