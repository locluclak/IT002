#include "CDiem.h"
#pragma once
#include <iostream>
using namespace std;

class CTamGiac
{
private:
	CDiem A, B, C;
public:
	CTamGiac(const CDiem&, const CDiem&, const CDiem&);
	CTamGiac(float, float, float, float, float, float);
	~CTamGiac();
	friend ostream& operator<<(ostream&, const CTamGiac&);
	CTamGiac& operator=(const CTamGiac&);
};

