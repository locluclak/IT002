#include "CNgay.h"
#include "iostream"
using namespace std;

CNgay::CNgay(int a, int b, int c)
{
	ngay = a;
	thang = b;
	nam = c;
	cout << "Goi PT khoi tao.\n";
}
CNgay::~CNgay()
{
	cout << "Goi PT pha huy.\n";
}