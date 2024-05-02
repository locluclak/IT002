#pragma once
#include "../Bai01/CDiem.h"
#include <iostream>
using namespace std;

class CDuongTron
{
private:
	CDiem O;
	float bankinh;
public:
	CDuongTron(const CDiem&, float = 1);
	CDuongTron(float = 0, float = 0, float = 1);
	~CDuongTron();
	friend ostream& operator<<(ostream&, const CDuongTron&);
	CDuongTron& operator=(const CDuongTron&);
};

