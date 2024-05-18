#include "CChiTietPhuc.h"

void CChiTietPhuc::Nhap()
{
	cout << "Nhap ma so: ";
	getline(cin, MaSo);
	cout << "Nhap so luong chi tiet thanh phan cua chi tiet phuc: ";
	cin >> this->n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		int loai;
		cout << "Nhap loai chi tiet (0. Chi tiet don, 1. Chi tiet phuc): ";
		cin >> loai;
		cin.ignore();
		if (loai == 0)
		{
			this->ds[i] = new CChiTietDon;
			ds[i]->Nhap();
		}
		else if (loai == 1)
		{
			this->ds[i] = new CChiTietPhuc;
			ds[i]->Nhap();
		}
	}
}

void CChiTietPhuc::Xuat()
{
	cout << "Ma so: " << this->MaSo << '\n';
	cout << "Danh sach cac chi tiet thanh phan cua chi tiet phuc: \n";
	for (int i = 0; i < this->n; i++)
	{
		cout << "Chi tiet thanh phan thu " << i + 1 << ": \n";
		this->ds[i]->Xuat();
	}
	cout << "Gia tien cua chi tiet phuc: " << this->TinhGiaTien() << '\n';
}

float CChiTietPhuc::TinhGiaTien()
{
	float count = 0;
	for (int i = 0; i < this->n; i++)
		count += this->ds[i]->TinhGiaTien();
	return count;
}

CChiTiet* CChiTietPhuc::TimKiem(string ms)
{
	CChiTiet* p;
	for (int i = 0; i < this->n; i++)
	{
		p = this->ds[i]->TimKiem(ms);
		if (p)
			return p;
	}
	return nullptr;
}
