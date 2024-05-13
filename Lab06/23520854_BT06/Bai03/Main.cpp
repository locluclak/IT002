#include "iostream"
#include "CDonThuc.h"
using namespace std;

int main()
{
	CDonThuc A, B;
	cout << "Nhap don thuc 1: \n";
	cin >> A;
	cout << A << '\n';
	cout << "Nhap don thuc 2: \n";
	cin >> B;
	cout << B << '\n';
	cout << "Don thuc nhan: " << A * B << '\n';
	cout << "Don thuc chia: " << A / B << '\n';
	CDonThuc F;
	F = A;
	cout << "Don thuc nhan bang: " << (F *= B) << '\n';
	F = A;
	cout << "Don thuc chia bang: " << (F /= B) << '\n';
	return 0;
}