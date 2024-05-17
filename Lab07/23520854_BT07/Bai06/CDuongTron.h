#pragma once
#include "../Bai03/CDiem.h"
#include <iostream>
using namespace std;

#define pi 3.14

class CDuongTron
{
private:
	CDiem tam;
	float bankinh;
public:
	friend istream& operator >> (istream&, CDuongTron&);
	friend ostream& operator << (ostream&, const CDuongTron&);
	float DienTich() const;
	bool operator > (const CDuongTron&) const;
	bool operator < (const CDuongTron&) const;
	bool operator >= (const CDuongTron&) const;
	bool operator <= (const CDuongTron&) const;
	bool operator == (const CDuongTron&) const;
	bool operator != (const CDuongTron&) const;
};

