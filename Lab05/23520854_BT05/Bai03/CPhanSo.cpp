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

CPhanSo::~CPhanSo()
{
}

int CPhanSo::GetTu() const
{
	return this->tu;
}

int CPhanSo::GetMau() const
{
	return this->mau;
}

ostream& operator<<(ostream& m, const CPhanSo& a)
{
	m << a.GetTu() << '/' << a.GetMau();
	return m;
}

CPhanSo& CPhanSo::operator=(const CPhanSo& a)
{
	tu = a.GetTu();
	mau = a.GetMau();
	return *this;
}