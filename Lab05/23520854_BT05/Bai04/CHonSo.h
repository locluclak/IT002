#include <iostream>
using namespace std;
#pragma once
class CHonSo
{
private:
	int phannguyen;
	int tu;
	int mau;
public:
	CHonSo();
	CHonSo(int, int, int);
	~CHonSo();
	friend ostream& operator<<(ostream&, const CHonSo&);
	int GetNguyen() const;
	int GetTu() const;
	int GetMau() const;
	CHonSo& operator=(const CHonSo&);
};

