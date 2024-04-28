#include "CThoiGian.h"
#include <iostream>
using namespace std;

CThoiGian::CThoiGian(int a, int b, int c)
{
	cout << "Goi PT khoi tao.\n";
	gio = a;
	phut = b;
	giay = c;
}

CThoiGian::~CThoiGian()
{
	cout << "Goi PT pha huy.\n";
}


