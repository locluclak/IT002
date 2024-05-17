#include "CSoPhuc.h"

istream& operator >> (istream& is, CSoPhuc& a)
{
	cout << "Nhap phan thuc: ";
	is >> a.thuc;
	cout << "Nhap phan ao: ";
	is >> a.ao;
	return is;
}

ostream& operator << (ostream& os, const CSoPhuc& a)
{
	os << "So phuc: z = " << a.thuc << '+' << a.ao << 'i';
	return os;
}

float CSoPhuc::module() const
{
	return sqrt(this->thuc * this->thuc + this->ao * this->ao);
}

bool CSoPhuc::operator > (const CSoPhuc& a) const
{
	return (this->module() > a.module());
}

bool CSoPhuc::operator < (const CSoPhuc& a) const
{
	return (this->module() < a.module());
}

bool CSoPhuc::operator >= (const CSoPhuc& a) const
{
	return !(this->module() < a.module());
}

bool CSoPhuc::operator <= (const CSoPhuc& a) const
{
	return !(this->module() > a.module());
}

bool CSoPhuc::operator == (const CSoPhuc& a) const
{
	return (this->module() == a.module());
}

bool CSoPhuc::operator != (const CSoPhuc& a) const
{
	return !(this->module() == a.module());
}