#pragma once
#include "CNhanVien.h"

class CNhanVienQuanLy: public CNhanVien
{
private:
	double HeSoChucVu, Thuong;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
	CNhanVien* TimKiem(string);
};

