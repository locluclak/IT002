#include "CNhanVienQuanLy.h"

void CNhanVienQuanLy::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap he so chuc vu: ";
	cin >> this->HeSoChucVu;
	cin.ignore();
	cout << "Nhap thuong: ";
	cin >> this->Thuong;
	cin.ignore();
}

void CNhanVienQuanLy::Xuat()
{
	CNhanVien::Xuat();
	cout << "\nHe so chuc vu: " << this->HeSoChucVu << '\n';
	cout << "Thuong: " << this->Thuong << '\n';
	cout << "Luong: " << setprecision(10) << this->TinhLuong();
}

double CNhanVienQuanLy::TinhLuong()
{
	return this->LuongCoBan * this->HeSoChucVu + this->Thuong;
}

CNhanVien* CNhanVienQuanLy::TimKiem(string ht)
{
	if (this->HoTen.compare(ht) == 0)
		return this;
	return nullptr;
}