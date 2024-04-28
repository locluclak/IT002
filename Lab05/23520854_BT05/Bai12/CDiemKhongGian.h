
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
};

