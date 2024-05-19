#pragma once
#include "CNhanVien.h"

class CNhanVienVanPhong: public CNhanVien
{
private:
	int SoNgayLamViec;
	double TroCap;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
	CNhanVien* TimKiem(string);
};

