#pragma once
#include "CChiTiet.h"

class CChiTietDon: public CChiTiet
{
private:
	float GiaTien;
public:
	void Nhap();
	void Xuat();
	float TinhGiaTien();
	CChiTiet* TimKiem(string);
};

