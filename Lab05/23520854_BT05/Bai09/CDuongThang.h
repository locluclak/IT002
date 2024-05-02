#pragma once
#include <iostream>
using namespace std;

class CDuongThang
{
private:
	float heso[2];
public:
	CDuongThang(float = 0, float = 0);
	~CDuongThang();
	friend ostream& operator<<(ostream&, const CDuongThang&);
	CDuongThang& operator=(const CDuongThang&);
};

