#include "iostream"
using namespace std;

#pragma once
class CPhanSo
{
private:
	int tu;
	int mau;
public:
	CPhanSo();
	CPhanSo(int, int);
	friend istream& operator>>(istream&, CPhanSo&);
	friend ostream& operator<<(ostream&, CPhanSo);
	int GetTu() const;
	int GetMau() const;
	CPhanSo& operator=(const CPhanSo&);
	CPhanSo operator+(const CPhanSo&) const;
	CPhanSo operator-(const CPhanSo&) const;
	CPhanSo operator*(const CPhanSo&) const;
	CPhanSo operator/(const CPhanSo&) const;
	CPhanSo& operator+=(const CPhanSo&);
	CPhanSo& operator-=(const CPhanSo&);
	CPhanSo& operator*=(const CPhanSo&);
	CPhanSo& operator/=(const CPhanSo&);
	CPhanSo& operator++();
	CPhanSo operator++(int);
	CPhanSo& operator--();
	CPhanSo operator--(int);

	bool operator<(const CPhanSo&) const;
	bool operator>(const CPhanSo&) const;
	bool operator<=(const CPhanSo&) const;
	bool operator>=(const CPhanSo&) const;
	bool operator==(const CPhanSo&) const;
	bool operator!=(const CPhanSo&) const;
};

