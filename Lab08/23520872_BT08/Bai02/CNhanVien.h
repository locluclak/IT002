#pragma once
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class CNhanVien
{
protected:
	string HoTen, NgaySinh;
	double LuongCoBan;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhLuong();
	virtual CNhanVien* TimKiem(string);
};

