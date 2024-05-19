#pragma once
#include "CMachDien.h"

class CDienTro: public CMachDien
{
private:
	string MaSo;
	float DienTro;
public:
	void Nhap();
	void Xuat();
	float TinhDienTroTuongDuong();
};

