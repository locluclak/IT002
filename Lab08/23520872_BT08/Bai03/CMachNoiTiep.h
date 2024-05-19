#pragma once
#include "CDangMach.h"

class CMachNoiTiep: public CDangMach
{
private:
	int n;
	CDangMach* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhDienTroTuongDuong();
};

