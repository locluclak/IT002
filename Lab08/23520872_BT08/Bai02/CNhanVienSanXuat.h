#pragma once
#include "CNhanVien.h"

class CNhanVienSanXuat: public CNhanVien
{
private:
	int SoLuongSanPham;
public: 
	void Nhap();
	void Xuat();
	double TinhLuong();
	CNhanVien* TimKiem(string);
};

