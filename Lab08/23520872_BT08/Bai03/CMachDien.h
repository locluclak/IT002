#pragma once
#include "CDangMach.h"
#include "CMachNoiTiep.h"
#include "CMachSongSong.h"
#include "CDienTro.h"

class CMachDien
{
private:
	CDangMach* Mach;
public:
	void Nhap();
	void Xuat();
	float TinhDienTroTuongDuong();
};

