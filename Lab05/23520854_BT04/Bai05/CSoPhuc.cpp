#include "CSoPhuc.h"
#include "iostream"
using namespace std;

CSoPhuc::CSoPhuc(float a, float b)
{
	this->thuc = a;
	this->ao = b;
	cout << "Goi PT khoi tao.\n";
}

CSoPhuc::~CSoPhuc()
{
	cout << "Goi PT pha huy.\n";
}