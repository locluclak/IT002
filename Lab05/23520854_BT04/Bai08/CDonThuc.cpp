#include "CDonThuc.h"
#include <iostream>
using namespace std;

CDonThuc::CDonThuc(int a, float b)
{
	cout << "Goi PT khoi tao.\n";
	heso = a;
	somu = b;
}

CDonThuc::~CDonThuc()
{
	cout << "Goi PT pha huy.\n";
}

