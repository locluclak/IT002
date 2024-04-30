#include <iostream>
using namespace std;
#pragma once
class CPhanSo
{
private:
	int tu;
	int mau;
public:
	CPhanSo();
	CPhanSo(int, int);
	~CPhanSo();
	friend ostream& operator<<(ostream&, const CPhanSo&);
	int GetTu() const;
	int GetMau() const;
	CPhanSo& operator=(const CPhanSo&);
};

