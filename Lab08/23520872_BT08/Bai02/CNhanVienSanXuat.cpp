#include "CNhanVienSanXuat.h"

void CNhanVienSanXuat::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so luong san pham: ";
	cin >> this->SoLuongSanPham;
}

void CNhanVienSanXuat::Xuat()
{
	CNhanVien::Xuat();
	cout << "\nSo luong san pham: " << this->SoLuongSanPham;
}