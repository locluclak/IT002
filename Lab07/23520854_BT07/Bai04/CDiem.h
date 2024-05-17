#include <iostream>
using namespace std;
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
	float Getx() const;
	float Gety() const;
	~CDiem();
	friend istream& operator>>(istream&, CDiem&);
	friend ostream& operator<<(ostream&, const CDiem&);
	CDiem& operator=(const CDiem&);
	bool operator==(const CDiem&) const;
	bool operator!=(const CDiem&) const;
};

