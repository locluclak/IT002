#include <iostream>
using namespace std;
#include "CThuMuc.h"

int main()
{
	CThuMuc F;
	F.Nhap();
	F.Xuat();
	
	cout << "So luong tap tin trong thu muc: " << F.DemTapTin() << '\n';
	cout << "So luong thu muc con trong thu muc: " << F.DemThuMucCon() << '\n';
	return 0;
}