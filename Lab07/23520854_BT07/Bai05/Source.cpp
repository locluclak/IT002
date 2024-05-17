#include "CSoPhuc.h"
#include "iostream"
using namespace std;
int main()
{
	CSoPhuc A, B, C, D, E;
	cout << "Nhap nam so phuc: ";
	cin >> A >> B >> C >> D >> E;
	cout << "Dien tich bon duong tron lan luot la: " << A.DienTich() << ' ' << B.DienTich() << ' ' << C.DienTich() << ' ' << D.DienTich() << ' ' << E.DienTich() << '\n';
	cout << "Toan tu lon cua lop CSoPhuc: " << boolalpha << (A > B) << '\n';
	cout << "Toan tu be cua lop CSoPhuc: " << boolalpha << (A < C) << '\n';
	cout << "Toan tu bang cua lop CSoPhuc: " << boolalpha << (A == D) << '\n';
	cout << "Toan tu khac cua lop CSoPhuc: " << boolalpha << (A != E) << '\n';

	return 0;
}