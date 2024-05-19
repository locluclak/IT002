#include "CDienTro.h"

void CDienTro::Nhap()
{
	cout << "Nhap ma so thiet bi: ";
	getline(cin, MaSo);
	cout << "Nhap gia tri dien tro: ";
	cin >> this->DienTro;
}

void CDienTro::Xuat()
{
	cout << "Ma so thiet bi: " << this->MaSo << '\n';
	cout << "Gia tri dien tro: " << this->DienTro;
}

float CDienTro::TinhDienTroTuongDuong()
{
	return this->DienTro;
}
