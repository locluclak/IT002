#include "CDiem.h"
//#include "../Bai01/CDiem.h"
#pragma once
class CTamGiac
{
private:
	CDiem A, B, C;
public:
	CTamGiac(const CDiem&, const CDiem&, const CDiem&);
	CTamGiac(float, float, float, float, float, float);
	~CTamGiac();
};

