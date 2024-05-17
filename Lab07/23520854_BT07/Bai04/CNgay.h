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
	friend istream& operator>>(istream&, CNgay&);
	friend ostream& operator<<(ostream&, const CNgay&);
	int GetNam() const;
	int GetThang() const;
	int GetNgay() const;
	bool operator==(const CNgay&) const;
	bool operator!=(const CNgay&) const;

};

