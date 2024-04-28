#include "CHonSo.h"
#include "iostream"
using namespace std;

CHonSo::CHonSo()
{
	phannguyen = 0;
	tu = 0;
	mau = 1;
	cout << "Goi PT khoi tao 1.\n";
}
CHonSo::CHonSo(int a, int b, int c)
{
	phannguyen = a;
	tu = b;
	mau = c;
	cout << "Goi PT khoi tao 2.\n";
}
CHonSo::~CHonSo()
{
	cout << "Goi PT pha huy.\n";
}