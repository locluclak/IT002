#include "CDuongTron.h"
#include "iostream"
using namespace std;
int main()
{
	CDuongTron A, B, C, D, E;
	cout << "Nhap nam duong tron: ";
	cin >> A >> B >> C >> D >> E;
	cout << "Dien tich bon duong tron lan luot la: " << A.DienTich() << ' ' << B.DienTich() << ' ' << C.DienTich() << ' ' << D.DienTich() << ' ' << E.DienTich() << '\n';
	cout << "Toan tu lon cua lop CDuongTron: " << boolalpha << (A > B) << '\n';
	cout << "Toan tu be cua lop CDuongTron: " << boolalpha << (A < C) << '\n';
	cout << "Toan tu bang cua lop CDuongTron: " << boolalpha << (A == D) << '\n';
	cout << "Toan tu khac cua lop CDuongTron: " << boolalpha << (A != E) << '\n';
	
	return 0;
}