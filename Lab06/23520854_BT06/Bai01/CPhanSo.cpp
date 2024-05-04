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

CPhanSo CPhanSo::operator+(const CPhanSo& a) const
{
	int qdmau = this->mau * a.GetMau();
	int qdtu = this->tu * a.GetMau() + a.GetTu() * this->mau;
	return CPhanSo(qdtu, qdmau);
}

CPhanSo CPhanSo::operator-(const CPhanSo& a) const
{
	return operator+(CPhanSo(-a.GetTu(), a.GetMau()));
}

CPhanSo CPhanSo::operator*(const CPhanSo& a) const
{
	return CPhanSo(tu * a.GetTu(), mau * a.GetMau());
}

CPhanSo CPhanSo::operator/(const CPhanSo& a) const
{
	return CPhanSo(tu * a.GetMau(), mau * a.GetTu());
}

CPhanSo& CPhanSo::operator+=(const CPhanSo& a)
{
	*this = *this + a;
	return *this;
}
CPhanSo& CPhanSo::operator-=(const CPhanSo& a)
{
	*this = *this - a;
	return *this;
}
CPhanSo& CPhanSo::operator*=(const CPhanSo& a)
{
	*this = *this * a;
	return *this;
}
CPhanSo& CPhanSo::operator/=(const CPhanSo& a)
{
	*this = *this / a;
	return *this;
}

CPhanSo& CPhanSo::operator++()
{
	operator+=(CPhanSo(1, 1));
	return *this;
}

CPhanSo CPhanSo::operator++(int)
{
	CPhanSo old = *this;
	operator++();
	return old;
}

CPhanSo& CPhanSo::operator--()
{
	operator-=(CPhanSo(1, 1));
	return *this;
}

CPhanSo CPhanSo::operator--(int)
{
	CPhanSo old = *this;
	operator--();
	return old;
}