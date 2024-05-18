#include "CTapTin.h"

void CTapTin::Nhap()
{
	cout << "Nhap ten tap tin: ";
	getline(cin, Ten);
	cout << "Nhap ngay thang tao: ";
	getline(cin, NgayThangTao);
	cout << "Nhap dung luong: ";
	cin >> DungLuong;
	cin.ignore();
}

void CTapTin::Xuat()
{
	cout << "Ten tap tin: " << Ten << '\n';
	cout << "Ngay thang tao: " << NgayThangTao << '\n';
	cout << "Dung luong: " << DungLuong << '\n';
}

float CTapTin::TongDungLuong()
{
	return this->DungLuong;
}

int CTapTin::DemTapTin()
{
	return 1;
}

int CTapTin::DemThuMuc()
{
	return 0;
}
