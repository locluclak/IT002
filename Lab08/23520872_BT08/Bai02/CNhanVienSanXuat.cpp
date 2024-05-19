#include "CNhanVienSanXuat.h"

void CNhanVienSanXuat::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so luong san pham: ";
	cin >> this->SoLuongSanPham;
	cin.ignore();
}

void CNhanVienSanXuat::Xuat()
{
	CNhanVien::Xuat();
	cout << "\nSo luong san pham: " << this->SoLuongSanPham << '\n';
	cout << "Luong: " << setprecision(10) << this->TinhLuong();
}

double CNhanVienSanXuat::TinhLuong()
{
	return this->LuongCoBan + this->SoLuongSanPham * 2000;
}

CNhanVien* CNhanVienSanXuat::TimKiem(string ht)
{
	if (this->HoTen.compare(ht) == 0)
		return this;
	return nullptr;
}