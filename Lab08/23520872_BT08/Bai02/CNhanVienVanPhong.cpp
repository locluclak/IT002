#include "CNhanVienVanPhong.h"

void CNhanVienVanPhong::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> this->SoNgayLamViec;
	cout << "Nhap tro cap: ";
	cin >> this->TroCap;
}

void CNhanVienVanPhong::Xuat()
{
	CNhanVien::Xuat();
	cout << "\nSo ngay lam viec: " << this->SoNgayLamViec << '\n';
	cout << "Tro cap: " << this->TroCap;
}
