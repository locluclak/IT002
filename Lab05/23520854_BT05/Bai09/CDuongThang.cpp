#include "CDuongThang.h"
#include <iostream>
using namespace std;

CDuongThang::CDuongThang(float a, float b)
{
	cout << "Goi PT khoi tao.\n";
	heso[0] = a;
	heso[1] = b;
}

CDuongThang::~CDuongThang()
{
	cout << "Goi PT pha huy.\n";
}
