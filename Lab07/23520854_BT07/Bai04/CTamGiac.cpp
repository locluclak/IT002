#include "CTamGiac.h"

istream& operator >> (istream& is, CTamGiac& A)
{
	cout << "Nhap ba dinh cua tam giac: \n";
	is >> A.A >> A.B >> A.C;
	return is;
}

ostream& operator << (ostream& os, const CTamGiac& A)
{
	os << A.A << ' ' << ' ' << A.B << ' ' << A.C;
	return os;
}

bool CTamGiac::operator == (const CTamGiac& A) const
{
	return (this->A.Getx() == A.A.Getx() && this->A.Gety() == A.A.Gety() && this->B.Getx() == A.B.Getx() && this->B.Gety() == A.B.Gety() && this->C.Getx() == A.C.Getx() && this->C.Gety() == A.C.Gety());
}

bool CTamGiac::operator != (const CTamGiac& A) const
{
	return !(*this == A);
}
