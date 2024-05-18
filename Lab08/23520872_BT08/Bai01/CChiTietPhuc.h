#pragma once
#include <string>
#include "CChiTiet.h"
#include "CChiTietDon.h"

class CChiTietPhuc: public CChiTiet
{
private:
	int n;
	CChiTiet* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhGiaTien();
	CChiTiet* TimKiem(string);
};

