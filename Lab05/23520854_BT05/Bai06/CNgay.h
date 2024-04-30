#include <iostream>
using namespace std;

#pragma once
class CNgay
{
private:
	int nam;
	int thang;
	int ngay;
public:
	CNgay(int = 0, int = 0, int = 0);
	~CNgay();
	friend ostream& operator<<(ostream&, const CNgay&);
	int GetNam() const;
	int GetThang() const;
	int GetNgay() const;
	CNgay& operator=(const CNgay&);
};

