#include "CSoPhuc.h"
#include "iostream"
using namespace std;

CSoPhuc::CSoPhuc(float a, float b)
{
	this->thuc = a;
	this->ao = b;
}

istream& operator>>(istream& m, CSoPhuc& a)
{
	cout << "Nhap phan thuc: ";
	m >> a.thuc;
	cout << "Nhap phan ao: ";
	m >> a.ao;
	return m;
}
ostream& operator<<(ostream& m, CSoPhuc a)
{
	m << a.thuc << " + " << a.ao << 'i';
	return m;
}

int CSoPhuc::Getthuc() const
{
	return this->thuc;
}

int CSoPhuc::Getao() const
{
	return this->ao;
}

CSoPhuc& CSoPhuc::operator=(const CSoPhuc& a)
{
	thuc = a.Getthuc();
	ao = a.Getao();
	return *this;
}

CSoPhuc CSoPhuc::operator+(const CSoPhuc& a) const
{
	return CSoPhuc(thuc + a.Getthuc(), ao + a.Getao());
}
CSoPhuc CSoPhuc::operator-(const CSoPhuc& a) const
{
	return CSoPhuc(thuc - a.Getthuc(), ao - a.Getao());
}
CSoPhuc CSoPhuc::operator*(const CSoPhuc& a) const
{
	float phanthuc = thuc * a.Getthuc() - ao * a.Getao();
	float phanao = ao * a.Getthuc() + thuc * a.Getao();
	return CSoPhuc(phanthuc, phanao);
}
CSoPhuc CSoPhuc::operator/(const CSoPhuc& a) const
{
	float div_ = a.Getthuc() * a.Getthuc() + a.Getao() * a.Getao();
	CSoPhuc temp = *this * CSoPhuc(a.Getthuc(), -a.Getao());
	return CSoPhuc(temp.Getthuc() / div_, temp.Getao() / div_);
}