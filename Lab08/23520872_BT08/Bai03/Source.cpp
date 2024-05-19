#include "CMachDien.h"
#include "CMachSongSong.h"
#include "CMachNoiTiep.h"
#include "CDienTro.h"

int main()
{
	CMachDien* I = nullptr;
	int loai;
	cout << "Nhap loai mach dien (0. Mach noi tiep, 1. Mach song song, 2. Dien tro): ";
	cin >> loai;
	
	if (loai == 0)
		I = new CMachNoiTiep;
	else if (loai == 1)
		I = new CMachSongSong;
	else if (loai == 2)
		I = new CDienTro;

	I->Nhap();
	cout << '\n';
	I->Xuat();
	return 0;
}