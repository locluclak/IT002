#include "CSoPhuc.h"
#include "iostream"
using namespace std;

CSoPhuc::CSoPhuc(float a, float b)
{
	this->thuc = a;
	this->ao = b;
}

CSoPhuc::~CSoPhuc()
{
}
int CSoPhuc::Getthuc() const
{
	return this->thuc;
}

int CSoPhuc::Getao() const
{
	return this->ao;
}


ostream& operator<<(ostream& m, const CSoPhuc& a)
{
	m << a.Getthuc() << '+' << a.Getao() << 'i';
	return m;
}

CSoPhuc& CSoPhuc::operator=(const CSoPhuc& a)
{
	thuc = a.Getthuc();
	ao = a.Getao();
	return *this;
}