#include "iostream"
using namespace std;

#pragma once
class CDaThuc
{
private:
	int somu;
	float arr[1000];
public:
	friend istream& operator>>(istream&, CDaThuc&);
	friend ostream& operator<<(ostream&, const CDaThuc&);
};