#include "CCongTy.h"

void CCongTy::Nhap()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> this->n;
	cin.ignore();
	for (int i = 0; i < this->n; i++)
	{
		int loai;
		cout << "\nNhap nhan vien thu " << i + 1 << ": \n";
		cout << "Nhap loai nhan vien (0. Nhan vien san xuat, 1. Nhan vien van phong, 2. Nhan vien quan ly): ";
		cin >> loai;
		cin.ignore();
		if (loai == 0)
			this->ds[i] = new CNhanVienSanXuat;
		else if (loai == 1)
			this->ds[i] = new CNhanVienVanPhong;
		else if (loai == 2)
			this->ds[i] = new CNhanVienQuanLy;
		this->ds[i]->Nhap();
	}
}

void CCongTy::Xuat()
{
	cout << "Danh sach nhan vien cua cong ty: \n";
	for (int i = 0; i < this->n; i++)
	{
		cout << "\nNhan vien thu " << i + 1 << ": \n";
		this->ds[i]->Xuat();
		cout << '\n';
	}
	cout << "\nTong luong cong ty: " << setprecision(10) << this->TinhLuong();
}

double CCongTy::TinhLuong()
{
	double luong = 0;
	for (int i = 0; i < this->n; i++)
		luong += this->ds[i]->TinhLuong();
	return luong;
}

CNhanVien* CCongTy::TimKiem(string ht)
{
	CNhanVien* p = nullptr;
	for (int i = 0; i < this->n; i++)
	{
		p = this->ds[i]->TimKiem(ht);
		if (p)
			return p;
	}
	return nullptr;
}
