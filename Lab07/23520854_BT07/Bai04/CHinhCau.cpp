#include "CHinhCau.h"

istream& operator >> (istream& is, CHinhCau& A)
{
	cout << "Nhap tam: \n";
	is >> A.tam;
	cout << "Nhap ban kinh: ";
	is >> A.bankinh;
	return is;
}

ostream& operator << (ostream& os, const CHinhCau& A)
{
	os << "Tam :" << A.tam << '\n';
	os << "Ban kinh: " << A.bankinh;
	return os;
}

bool CHinhCau::operator == (const CHinhCau& A) const
{
	return (this->tam.Getx() == A.tam.Getx() && this->tam.Gety() == A.tam.Gety() && this->bankinh == A.bankinh);
}

bool CHinhCau::operator != (const CHinhCau& A) const
{
	return !(*this == A);
}