#pragma once
#include "CMachDien.h"

class CMachSongSong: public CMachDien
{
private:
	int n;
	CMachDien* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhDienTroTuongDuong();
};

