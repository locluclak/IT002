#pragma once
#include "../Bai01/CDiem.h"

class CDuongTron
{
private:
	CDiem O;
	float bankinh;
public:
	CDuongTron(const CDiem&, float = 1);
	CDuongTron(float = 0, float = 0, float = 1);
	~CDuongTron();
};

