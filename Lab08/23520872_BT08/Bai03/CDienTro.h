#pragma once
#include "CDangMach.h"

class CDienTro: public CDangMach
{
private:
	string MaSo;
	float DienTro;
public:
	void Nhap();
	void Xuat();
	float TinhDienTroTuongDuong();
};

