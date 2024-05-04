#include "CPhanSo.h"
#include "iostream"
using namespace std;

int main()
{
	CPhanSo A(1,2), B(1,2);
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	return 0;
}