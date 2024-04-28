#include "CPhanSo.h"
#include "iostream"
using namespace std;

CPhanSo::CPhanSo()
{
	this->tu = 0;
	this->mau = 1;
	cout << "Goi PT khoi tao 1.\n";
}

CPhanSo::CPhanSo(int a, int b)
{
	this->tu = a;
	this->mau = b;
	cout << "Goi PT khoi tao 2.\n";
}

CPhanSo::~CPhanSo()
{
	cout << "Goi PT pha huy\n";
}