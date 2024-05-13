#include "CDaThuc.h"
#include "iostream"
using namespace std;

istream& operator>>(istream& m, CDaThuc& a)
{
	cout << "Nhap so mu: ";
	m >> a.somu;
	for (int i = a.somu; i >= 0; i--)
	{
		cout << "Nhap he so x^" << i << ": ";
		m >> a.arr[i];
	}

	return m;
}
ostream& operator<<(ostream& m, const CDaThuc& a)
{
	m << "f(x) = ";
	for (int i = a.somu; i >= 0; i--)
	{
		if (i == 0)
		{

			m << a.arr[i];
			break;
		}
		m << a.arr[i] << "x^" << i << " + ";
	}
	cout << '\n';
	return m;
}

void CDaThuc::RutGon()
{
	while (this->arr[this->somu] == 0 && this->somu > 0)
		this->somu--;
}

CDaThuc CDaThuc::operator+(const CDaThuc& a)
{
	CDaThuc res;
	res.somu = max(this->somu, a.somu);
	for (int i = res.somu; i >= 0; i--)
		res.arr[i] = this->arr[i] + a.arr[i];
	res.RutGon();
	return res;
}

CDaThuc CDaThuc::operator-(const CDaThuc& a)
{
	CDaThuc res;
	res.somu = max(this->somu, a.somu);
	for (int i = res.somu; i >= 0; i--)
		res.arr[i] = this->arr[i] - a.arr[i];
	res.RutGon();
	return res;
}

CDaThuc CDaThuc::operator*(const CDaThuc& a)
{
	CDaThuc res;
	res.somu = this->somu + a.somu;
	for (int i = this->somu; i >= 0; i--)
		for (int j = a.somu; j >= 0; j--)
			res.arr[i + j] += this->arr[i] * a.arr[j];
	res.RutGon();
	return res;
}

CDaThuc CDaThuc::operator/(const CDaThuc& a)
{
	CDaThuc res;
	res.somu = max(this->somu - a.somu, 0);
	CDaThuc BC = *this;
	CDaThuc C = a;
	while (BC.somu >= a.somu)
	{
		CDaThuc TG;
		TG.somu = BC.somu - C.somu;
		TG.arr[TG.somu] = BC.arr[BC.somu] / C.arr[C.somu];
		res = res + TG;

		CDaThuc Tru = TG * C;
		BC = BC - Tru;
	}
	res.RutGon();
	return res;
}

CDaThuc& CDaThuc::operator+=(const CDaThuc& a)
{
	this->somu = max(this->somu, a.somu);
	for (int i = this->somu; i >= 0; i--)
		this->arr[i] = this->arr[i] + a.arr[i];
	this->RutGon();
	return *this;
}

CDaThuc& CDaThuc::operator-=(const CDaThuc& a)
{
	this->somu = max(this->somu, a.somu);
	for (int i = this->somu; i >= 0; i--)
		this->arr[i] = this->arr[i] - a.arr[i];
	this->RutGon();
	return *this;
}

CDaThuc& CDaThuc::operator*=(const CDaThuc& a)
{
	CDaThuc temp = *this;
	this->somu = temp.somu + a.somu;
	for (int i = 0; i <= this->somu; i++)
		this->arr[i] = 0;
	for (int i = temp.somu; i >= 0; i--)
		for (int j = a.somu; j >= 0; j--)
			this->arr[i + j] += temp.arr[i] * a.arr[j];
	this->RutGon();
	return *this;
}

CDaThuc& CDaThuc::operator/=(const CDaThuc& a)
{
	CDaThuc BC = *this;
	CDaThuc C = a;
	this->somu = max(BC.somu - C.somu, 0);
	for (int i = this->somu; i >= 0; i--)
		this->arr[i] = 0;
	while (BC.somu >= C.somu)
	{
		CDaThuc TG;
		TG.somu = BC.somu - C.somu;
		TG.arr[TG.somu] = BC.arr[BC.somu] / C.arr[C.somu];
		this->arr[TG.somu] = TG.arr[TG.somu];

		BC -= C * TG;
	}
	this->RutGon();
	return *this;
}