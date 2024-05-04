#include "iostream"
using namespace std;

#pragma once
class CDonThuc
{
private:
	float heso;
	int somu;
public:
	friend istream& operator>>(istream&, CDonThuc&);
	friend ostream& operator<<(ostream&, CDonThuc);
};