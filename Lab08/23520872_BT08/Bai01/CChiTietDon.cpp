#include "CChiTietDon.h"

void CChiTietDon::Nhap()
{
	cout << "Nhap ma so: ";
	getline(cin, this->MaSo);
	cout << "Nhap gia tien: ";
	cin >> GiaTien;
	cin.ignore();
}

void CChiTietDon::Xuat()
{
	cout << "Ma so: " << this->MaSo << '\n';
	cout << "Gia tien: " << this->GiaTien << '\n';
}

float CChiTietDon::TinhGiaTien()
{
	return this->GiaTien;
}

CChiTiet* CChiTietDon::TimKiem(string ms)
{
	if (this->MaSo.compare(ms))
		return this;
	return nullptr;
}
