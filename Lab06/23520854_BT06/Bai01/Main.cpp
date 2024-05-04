#include "CPhanSo.h"
#include "iostream"
using namespace std;

int main()
{
	CPhanSo A(1,2), B(1,2);
	cout << "+ - * /" << endl;
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	
	CPhanSo C(2, 3), D(1, 3);
	cout << "+= -= *= /=" << endl;
	A += B;
	cout << A << endl;

	C -= D;
	cout << C << endl;

	C *= D;
	cout << C << endl;

	C /= D;
	cout << C << endl;

	cout << "++ --" << endl;

	C++;
	cout << C << endl;
	C--;
	cout << C << endl;
	return 0;
}