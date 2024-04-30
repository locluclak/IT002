#include <iostream>
using namespace std;
#pragma once

class CDiemKhongGian
{
private:
	float x;
	float y;
	float z;
public:
	CDiemKhongGian(float = 0, float = 0, float = 0);
	CDiemKhongGian(const CDiemKhongGian&);
	void Setx(float x);
	void Sety(float y);
	void Setz(float z);
	~CDiemKhongGian();
	float Getx() const;
	float Gety() const;
	float Getz() const;
	friend ostream& operator<<(ostream&, const CDiemKhongGian&);
	CDiemKhongGian& operator=(const CDiemKhongGian&);
};

