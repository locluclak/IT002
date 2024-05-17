#include "CDuongTron.h"

istream& operator >> (istream& is, CDuongTron& A)
{
	cout << "Nhap tam: \n";
	is >> A.tam;
	cout << "Nhap ban kinh: ";
	is >> A.bankinh;
	return is;
}

ostream& operator << (ostream& os, const CDuongTron& A)
{
	os << "Tam: " << A.tam << ' ' << "Ban kinh: " << A.bankinh;
	return os;
}

float CDuongTron::DienTich() const
{
	return this->bankinh * this->bankinh * pi;
}

bool CDuongTron::operator > (const CDuongTron& a) const
{
	return (this->DienTich() > a.DienTich());
}

bool CDuongTron::operator < (const CDuongTron& a) const
{
	return (this->DienTich() < a.DienTich());
}

bool CDuongTron::operator >= (const CDuongTron& a) const
{
	return !(this->DienTich() < a.DienTich());
}

bool CDuongTron::operator <= (const CDuongTron& a) const
{
	return !(this->DienTich() > a.DienTich());
}

bool CDuongTron::operator == (const CDuongTron& a) const
{
	return (this->DienTich() == a.DienTich());
}

bool CDuongTron::operator != (const CDuongTron& a) const
{
	return !(this->DienTich() == a.DienTich());
}