#pragma once
#include "CDoiTuongLuuTru.h"
#include "CTapTin.h"

class CThuMuc:public CDoiTuongLuuTru
{
private:
	int n;
	CDoiTuongLuuTru* ds[100];
public:
	void Nhap();
	void Xuat();
	float TongDungLuong();
	int DemTapTin();
	int DemThuMuc();
	int DemThuMucCon();
};

