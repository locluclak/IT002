#pragma once
#include "CNhanVien.h"

class CNhanVienQuanLy: public CNhanVien
{
private:
	float HeSoChucVu, Thuong;
public:
	void Nhap();
	void Xuat();
};

