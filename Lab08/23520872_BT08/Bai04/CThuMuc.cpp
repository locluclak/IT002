#include "CThuMuc.h"

void CThuMuc::Nhap()
{
	cout << "Nhap ten thu muc: ";
	getline(cin, this->Ten);
	cout << "Nhap ngay thang tao: ";
	getline(cin, this->NgayThangTao);
	cout << "Nhap so luong doi tuong luu tru con trong thu muc: ";
	cin >> this->n;
	cin.ignore();
	
	for (int i = 0; i < this->n; i++)
	{
		cout << "Nhap doi tuong luu tru thu " << i + 1 << ": ";
		cout << "Nhap loai (0. Tap tin, 1. Thu muc): ";
		int loai;
		cin >> loai;
		cin.ignore();
		if (loai == 0)
			ds[i] = new CTapTin;
		else if (loai == 1)
			ds[i] = new CThuMuc;

		ds[i]->Nhap();
	}
}

void CThuMuc::Xuat()
{
	cout << "Ten thu muc: " << this->Ten << '\n';
	cout << "Ngay thang tao: " << this->NgayThangTao << '\n';
	cout << "Danh sach cac doi tuong luu tru con cua thu muc: \n";
	for (int i = 0; i < n; i++)
		ds[i]->Xuat();
	cout << "Tong dung luong cua thu muc: " << this->TongDungLuong() << '\n';
}

float CThuMuc::TongDungLuong()
{
	float dem = 0;
	for (int i = 0; i < this->n; i++)
		dem += ds[i]->TongDungLuong();
	return dem;
}

int CThuMuc::DemTapTin()
{
	int dem = 0;
	for (int i = 0; i < this->n; i++)
		dem += ds[i]->DemTapTin();
	return dem;
}

int CThuMuc::DemThuMuc()
{
	int dem = 1;
	for (int i = 0; i < this->n; i++)
		dem += ds[i]->DemThuMuc();
	return dem;
}

int CThuMuc::DemThuMucCon()
{
	return this->DemThuMuc() - 1;
}