#include "CDiem.h"
#include "iostream"
using namespace std;

CDiem::CDiem(float a, float b)
{
	cout << "Goi PT khoi tao 1.\n";
	x = a;
	y = b;
}

CDiem::CDiem(const CDiem& A)
{
	cout << "Goi PT khoi tao 2.\n";
	this->x = A.x;
	this->y = A.y;
}

void CDiem::Setx(const float& a)
{
	this->x = a;
}

void CDiem::Sety(const float& b)
{
	this->y = b;
}

CDiem::~CDiem()
{
	cout << "Goi PT pha huy.\n";
}