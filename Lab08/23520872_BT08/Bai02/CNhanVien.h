#pragma once
#include <string>
#include <iostream>
using namespace std;

class CNhanVien
{
protected:
	string HoTen, NgaySinh;
	float LuongCoBan;
public:
	virtual void Nhap();
	virtual void Xuat();
};

