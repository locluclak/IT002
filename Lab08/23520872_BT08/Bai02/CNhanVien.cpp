#include "CNhanVien.h"

void CNhanVien::Nhap()
{
	cout << "Nhap ho ten: ";
	getline(cin, this->HoTen);
	cout << "Nhap ngay sinh: ";
	getline(cin, this->NgaySinh);
	cout << "Nhap luong co ban: ";
	cin >> this->LuongCoBan;
	cin.ignore();
}

void CNhanVien::Xuat()
{
	cout << "Ho ten: " << this->HoTen << '\n';
	cout << "Ngay sinh: " << this->NgaySinh << '\n';
	cout << "Luong co ban: " << this->LuongCoBan;
}

double CNhanVien::TinhLuong()
{
	return 0;
}

CNhanVien* CNhanVien::TimKiem(string ht)
{
	return nullptr;
}