#pragma once
#include <iostream>
using namespace std;

class CThoiGian
{
private:
	int gio, phut, giay;
public:
	CThoiGian(int = 0, int = 0, int = 0);
	friend ostream& operator<<(ostream&, const CThoiGian&);
	CThoiGian& operator=(const CThoiGian&);
	~CThoiGian();
};

