#include "CMay.h"

void CMay::Nhap()
{
	cout << "Nhap so luong chi tiet may thanh phan: ";
	cin >> this->n;
	cin.ignore();
	for (int i = 0; i < this->n; i++)
	{
		int loai;
		cout << "\nNhap loai chi tiet may (0. Chi tiet don, 1. Chi tiet phuc): ";
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

void CMay::Xuat()
{
	cout << "\nDanh sach cac chi tiet thanh phan cua may: \n";
	for (int i = 0; i < this->n; i++)
	{
		cout << "\nChi tiet thanh phan thu " << i + 1 << ": \n";
		this->ds[i]->Xuat();
	}
	cout << "\nTong gia tien cua may: " << this->TinhGiaTien() << '\n';
}

float CMay::TinhGiaTien()
{
	float count = 0;
	for (int i = 0; i < this->n; i++)
		count += this->ds[i]->TinhGiaTien();
	return count;
}

CChiTiet* CMay::TimKiem(string ms)
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


