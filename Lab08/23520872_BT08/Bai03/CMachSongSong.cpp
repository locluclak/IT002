#include "CMachNoiTiep.h"
#include "CMachSongSong.h"
#include "CDienTro.h"

void CMachSongSong::Nhap()
{
	cout << "Nhap so luong mach dien thanh phan: ";
	cin >> this->n;
	cin.ignore();
	for (int i = 0; i < this->n; i++)
	{
		int loai;
		cout << "\nNhap loai mach dien thanh phan thu " << i + 1 << " (0. Mach noi tiep, 1. Mach song song, 2. Dien tro): ";
		cin >> loai;
		cin.ignore();
		if (loai == 0)
		{
			this->ds[i] = new CMachNoiTiep;
			this->ds[i]->Nhap();
		}
		else if (loai == 1)
		{
			this->ds[i] = new CMachSongSong;
			this->ds[i]->Nhap();
		}
		else if (loai == 2)
		{
			this->ds[i] = new CDienTro;
			this->ds[i]->Nhap();
		}
	}
}

void CMachSongSong::Xuat()
{
	cout << "Danh sach mach thanh phan cua mach song song: \n";
	for (int i = 0; i < this->n; i++)
	{
		cout << "\nMach dien thanh phan thu " << i + 1 << ": \n";
		this->ds[i]->Xuat();
		cout << '\n';
	}
	cout << "Dien tro tuong duong tren doan mach: " << this->TinhDienTroTuongDuong();
}

float CMachSongSong::TinhDienTroTuongDuong()
{
	float count = 0;

	for (int i = 0; i < this->n; i++)
		count += 1 / this->ds[i]->TinhDienTroTuongDuong();

	return 1 / count;
}
