#include <iostream>
using namespace std;
#include "CMay.h"

int main()
{
	CMay M;
	M.Nhap();
	M.Xuat();
	
	string ms;
	getline(cin, ms);

	cout << "\nTim kiem chi tiet co ma so: " << ms << '\n';
	CChiTiet* ketqua = M.TimKiem(ms);
	if (ketqua)
		ketqua->Xuat();
	else
		cout << "Khong tim thay";

	cout << "So luong chi tiet don trong may: " << M.DemChiTietDon();
	return 0;
}