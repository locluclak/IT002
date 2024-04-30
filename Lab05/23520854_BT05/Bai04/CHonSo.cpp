#include "CHonSo.h"
#include "iostream"
using namespace std;

CHonSo::CHonSo()
{
	phannguyen = 0;
	tu = 0;
	mau = 1;
}
CHonSo::CHonSo(int a, int b, int c)
{
	phannguyen = a;
	tu = b;
	mau = c;
}
CHonSo::~CHonSo()
{
}

int CHonSo::GetTu() const
{
	return this->tu;
}

int CHonSo::GetMau() const
{
	return this->mau;
}

int CHonSo::GetNguyen() const
{
	return this->phannguyen;
}

ostream& operator<<(ostream& m, const CHonSo& a)
{
	m << a.GetNguyen() << '+' << a.GetTu() << '/' << a.GetMau();
	return m;
}

CHonSo& CHonSo::operator=(const CHonSo& a)
{
	tu = a.GetTu();
	phannguyen = a.GetNguyen();
	mau = a.GetMau();
	return *this;
}