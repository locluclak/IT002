#pragma once
#include <iostream>
using namespace std;

class CDonThuc
{
private:
	int somu;
	float heso;
public:
	CDonThuc(int = 0, float = 0);
	~CDonThuc();
	friend ostream& operator<<(ostream&, const CDonThuc&);
	CDonThuc& operator=(const CDonThuc&);
};

