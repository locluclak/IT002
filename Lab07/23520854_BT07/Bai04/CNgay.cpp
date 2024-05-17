#include "CNgay.h"
#include "iostream"
using namespace std;

CNgay::CNgay(int a, int b, int c)
{
	ngay = a;
	thang = b;
	nam = c;
}
CNgay::~CNgay()
{
}

int CNgay::GetNam() const
{
	return this->nam;
}

int CNgay::GetThang() const
{
	return this->thang;
}
int CNgay::GetNgay() const
{
	return this->ngay;
}

istream& operator>>(istream& m, CNgay& a)
{
	cout << "Nhap ngay: ";
	m >> a.ngay;
	
	cout << "Nhap thang: ";
	m >> a.thang;
	
	cout << "Nhap nam: ";
	m >> a.nam;

	return m;
}
ostream& operator<<(ostream& m, const CNgay& a)
{
	m << a.GetNgay() << '/' << a.GetThang() << '/' << a.GetNam();
	return m;
}

bool CNgay::operator==(const CNgay& a) const
{
	return (ngay == a.GetNgay() && thang == a.GetThang() && nam == a.GetNam());
}
bool CNgay::operator!=(const CNgay& a) const
{
	return !(*this == a);
}