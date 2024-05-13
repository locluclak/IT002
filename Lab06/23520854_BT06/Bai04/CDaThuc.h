#include "iostream"
using namespace std;

#pragma once
class CDaThuc
{
private:
	int somu;
	float arr[100] = { 0 };
public:
	CDaThuc()
	{
		this->somu = 0;
	}
	friend istream& operator>>(istream&, CDaThuc&);
	friend ostream& operator<<(ostream&, const CDaThuc&);
	void RutGon();
	CDaThuc operator+(const CDaThuc&);
	CDaThuc operator-(const CDaThuc&);
	CDaThuc operator*(const CDaThuc&);
	CDaThuc operator/(const CDaThuc&);
	CDaThuc& operator+=(const CDaThuc&);
	CDaThuc& operator-=(const CDaThuc&);
	CDaThuc& operator*=(const CDaThuc&);
	CDaThuc& operator/=(const CDaThuc&);
};