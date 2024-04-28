#pragma once
class CDiem
{
private:
	float x;
	float y;
public:
	CDiem(float = 0, float = 0);
	CDiem(const CDiem&);
	void Setx(const float&);
	void Sety(const float&);
	~CDiem();
};

