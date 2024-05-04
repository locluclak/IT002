#include "iostream"
using namespace std;

#pragma once
class CSoPhuc
{
private:
	float thuc;
	float ao;
public:
	CSoPhuc(float = 0, float = 0);
	friend istream& operator>>(istream&, CSoPhuc&);
	friend ostream& operator<<(ostream&, CSoPhuc);
	int Getthuc() const;
	int Getao() const;
	CSoPhuc& operator=(const CSoPhuc&);
	CSoPhuc operator+(const CSoPhuc&) const;
	CSoPhuc operator-(const CSoPhuc&) const;
	CSoPhuc operator*(const CSoPhuc&) const;
	CSoPhuc operator/(const CSoPhuc&) const;
	CSoPhuc& operator+=(const CSoPhuc&);
	CSoPhuc& operator-=(const CSoPhuc&);
	CSoPhuc& operator*=(const CSoPhuc&);
	CSoPhuc& operator/=(const CSoPhuc&);
	CSoPhuc& operator++();
	CSoPhuc& operator--();
	CSoPhuc operator++(int);
	CSoPhuc operator--(int);
};

