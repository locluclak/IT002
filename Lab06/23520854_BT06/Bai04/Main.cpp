#include "CDaThuc.h"

int main()
{
	CDaThuc F1, F2;
	cout << "Nhap da thuc 1: \n";
	cin >> F1;
	cout << F1;
	cout << "Nhap da thuc 2: \n";
	cin >> F2;
	cout << F2;
	CDaThuc Cong = F1 + F2;
	CDaThuc Tru = F1 - F2;
	CDaThuc Nhan = F1 * F2;
	CDaThuc Chia = F1 / F2;
	cout << "Da thuc cong: " << Cong;
	cout << "Da thuc tru: " << Tru;
	cout << "Da thuc nhan: " << Nhan;
	cout << "Da thuc chia: " << Chia;
	CDaThuc F;
	cout << "Da thuc cong bang: ";
	F = F1;
	F += F2;
	cout << F;
	cout << "Da thuc tru bang: ";
	F = F1;
	F -= F2;
	cout << F;
	cout << "Da thuc nhan bang: ";
	F = F1;
	F *= F2;
	cout << F;
	cout << "Da thuc chia bang: ";
	F = F1;
	F /= F2;
	cout << F;
	return 0;
}