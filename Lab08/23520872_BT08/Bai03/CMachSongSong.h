#pragma once
#include "CDangMach.h"

class CMachSongSong: public CDangMach
{
private:
	int n;
	CDangMach* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhDienTroTuongDuong();
};

