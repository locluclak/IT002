#pragma once
#include <string>
#include <iostream>
using namespace std;

class CDoiTuongLuuTru
{
protected:
	string Ten;
	string NgayThangTao;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual float TongDungLuong();
	virtual int DemTapTin();
	virtual int DemThuMuc();
};

