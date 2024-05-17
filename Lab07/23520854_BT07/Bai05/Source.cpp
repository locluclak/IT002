#include "CSoPhuc.h"

int main()
{
	CSoPhuc A, B;
	cout << "Nhap hai so phuc: \n";
	cin >> A >> B;
	cout << "Module hai so phuc lan luot la: " << A.module() << ' ' << B.module() << '\n';
	cout << "Toan tu lon cua lop CSoPhuc: " << boolalpha << (A > B) << '\n';
	cout << "Toan tu be cua lop CSoPhuc: " << boolalpha << (A < B) << '\n';
	cout << "Toan tu lon bang cua lop CSoPhuc: " << boolalpha << (A >= B) << '\n';
	cout << "Toan tu nho bang cua lop CSoPhuc: " << boolalpha << (A <= B) << '\n';
	cout << "Toan tu bang cua lop CSoPhuc: " << boolalpha << (A == B) << '\n';
	cout << "Toan tu khac cua lop CSoPhuc: " << boolalpha << (A != B) << '\n';
	return 0;
}