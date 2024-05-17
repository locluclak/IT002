#include "CDiemKhongGian.h"

istream& operator>>(istream& is, CDiemKhongGian& A)
{
	cout << "Nhap hoanh do: ";
	is >> A.x;
	cout << "Nhap tung do: ";
	is >> A.y;
	cout << "Nhap cao do: ";
	is >> A.z;
	return is;
}

ostream& operator<<(ostream& os, const CDiemKhongGian& A)
{
	os << "Diem: (" << A.x << ";" << A.y << ";" << A.z << ")" << '\n';
	return os;
}

bool CDiemKhongGian::operator == (const CDiemKhongGian& A) const
{
	return (this->x == A.x && this->y == A.y && this->z == A.z);
}

bool CDiemKhongGian::operator != (const CDiemKhongGian& A) const
{
	return (this->x != A.x || this->y != A.y || this->z != A.z);
}