#include "CDuongThang.h"

istream& operator >> (istream& is, CDuongThang& y)
{
	cout << "Nhap he so: ";
	is >> y.a >> y.b;
	return is;
}

ostream& operator << (ostream& os, const CDuongThang& y)
{
	os << "Duong thang: y=" << y.a << 'x+' << y.b;
	return os;
}

bool CDuongThang::operator == (const CDuongThang& y) const
{
	return (this->a == y.a && this->b == y.b);
}

bool CDuongThang::operator != (const CDuongThang& y) const
{
	return (this->a != y.a || this->b != y.b);
}
