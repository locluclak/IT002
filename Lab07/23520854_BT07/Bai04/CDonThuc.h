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
	int getSoMu() const;
	float getHeSo() const;
	friend istream& operator>>(istream&, CDonThuc&);
	bool operator==(const CDonThuc&) const;
	bool operator!=(const CDonThuc&) const;
};

