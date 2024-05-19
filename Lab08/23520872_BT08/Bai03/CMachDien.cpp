#include "CMachDien.h"

void CMachDien::Nhap()
{
	int loai;
	cout << "Nhap loai mach dien " << " (0. Mach noi tiep, 1. Mach song song, 2. Dien tro): ";
	cin >> loai;
	cin.ignore();
	if (loai == 0)
	{
		this->Mach = new CMachNoiTiep;
		this->Mach->Nhap();
	}
	else if (loai == 1)
	{
		this->Mach = new CMachSongSong;
		this->Mach->Nhap();
	}
	else if (loai == 2)
	{
		this->Mach = new CDienTro;
		this->Mach->Nhap();
	}
}

void CMachDien::Xuat()
{
	this->Mach->Xuat();
	cout << "\n\nDien tro tuong duong tren toan bo mach dien: " << this->TinhDienTroTuongDuong();
}

float CMachDien::TinhDienTroTuongDuong()
{
	return this->Mach->TinhDienTroTuongDuong();
}
