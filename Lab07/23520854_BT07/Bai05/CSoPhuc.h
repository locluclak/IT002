#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class CSoPhuc
{
private:
	float thuc;
	float ao;
public:
	friend istream& operator >> (istream&, CSoPhuc&);
	friend ostream& operator << (ostream&, const CSoPhuc&);
	float module() const;
	bool operator > (const CSoPhuc&) const;
	bool operator < (const CSoPhuc&) const;
	bool operator >= (const CSoPhuc&) const;
	bool operator <= (const CSoPhuc&) const;
	bool operator == (const CSoPhuc&) const;
	bool operator != (const CSoPhuc&) const;
};

