#include "CDuongTron.h"

int main()
{
	CDuongTron A, B;
	cout << "Nhap hai duong tron: \n";
	cin >> A >> B;
	cout << "Dien tich hai duong tron lan luot la: " << A.DienTich() << ' ' << B.DienTich() << '\n';
	cout << "Toan tu lon cua lop CDuongTron: " << boolalpha << (A > B) << '\n';
	cout << "Toan tu be cua lop CDuongTron: " << boolalpha << (A < B) << '\n';
	cout << "Toan tu lon bang cua lop CDuongTron: " << boolalpha << (A >= B) << '\n';
	cout << "Toan tu nho bang cua lop CDuongTron: " << boolalpha << (A <= B) << '\n';
	cout << "Toan tu bang cua lop CDuongTron: " << boolalpha << (A == B) << '\n';
	cout << "Toan tu khac cua lop CDuongTron: " << boolalpha << (A != B) << '\n';
	return 0;
}