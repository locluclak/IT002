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


ostream& operator<<(ostream& m, const CNgay& a)
{
	m << a.GetNgay() << '/' << a.GetThang() << '/' << a.GetNam();
	return m;
}

CNgay& CNgay::operator=(const CNgay& a)
{
	nam = a.GetNam();
	thang = a.GetThang();
	ngay = a.GetNgay();
	return *this;
}