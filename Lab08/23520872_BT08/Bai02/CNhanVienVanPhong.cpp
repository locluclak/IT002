#include "CNhanVienVanPhong.h"

void CNhanVienVanPhong::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> this->SoNgayLamViec;
	cin.ignore();
	cout << "Nhap tro cap: ";
	cin >> this->TroCap;
	cin.ignore();
}

void CNhanVienVanPhong::Xuat()
{
	CNhanVien::Xuat();
	cout << "\nSo ngay lam viec: " << this->SoNgayLamViec << '\n';
	cout << "Tro cap: " << this->TroCap << '\n';
	cout << "Luong: " << setprecision(10) << this->TinhLuong();
}

double CNhanVienVanPhong::TinhLuong()
{
	return this->LuongCoBan + this->SoNgayLamViec * 100000 + this->TroCap;
}

CNhanVien* CNhanVienVanPhong::TimKiem(string ht)
{
	if (this->HoTen.compare(ht) == 0)
		return this;
	return nullptr;
}