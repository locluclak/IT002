#include "CNhanVienQuanLy.h"

void CNhanVienQuanLy::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap he so chuc vu: ";
	cin >> this->HeSoChucVu;
	cout << "Nhap thuong: ";
	cin >> this->Thuong;
}

void CNhanVienQuanLy::Xuat()
{
	CNhanVien::Xuat();
	cout << "\nHe so chuc vu: " << this->HeSoChucVu << '\n';
	cout << "Thuong: " << this->Thuong;
}
