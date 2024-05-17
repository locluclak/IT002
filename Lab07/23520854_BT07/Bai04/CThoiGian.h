#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
private:
	int gio, phut, giay;
public:
	CThoiGian(int = 0, int = 0, int = 0);
	friend istream& operator>>(istream&, CThoiGian&);
	friend ostream& operator<<(ostream&, const CThoiGian&);
	~CThoiGian();
	int getGio() const;
	int getPhut() const;
	int getGiay() const;
	bool operator==(const CThoiGian&) const;
	bool operator!=(const CThoiGian&) const;
};

