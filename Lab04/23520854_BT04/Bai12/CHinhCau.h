#include "CDiemKhongGian.h"
#pragma once

class CHinhCau
{
private:
	CDiemKhongGian O;
	float bankinh;
public:
	CHinhCau(const CDiemKhongGian&, float = 1);
	CHinhCau(float = 0, float = 0, float = 0, float = 1);
	~CHinhCau();
};

