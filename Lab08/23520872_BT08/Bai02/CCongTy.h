#pragma once
#include "CNhanVien.h"
#include "CNhanVienQuanLy.h"
#include "CNhanVienSanXuat.h"
#include "CNhanVienVanPhong.h"

class CCongTy
{
private:
	int n;
	CNhanVien* ds[100];
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
	CNhanVien* TimKiem(string);
};

