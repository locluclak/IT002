#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
	float x, y, z;
public:
	friend istream& operator>>(istream&, CDiemKhongGian&);
	friend ostream& operator<<(ostream&, const CDiemKhongGian&);
	bool operator == (const CDiemKhongGian&) const;
	bool operator != (const CDiemKhongGian&) const;
};

