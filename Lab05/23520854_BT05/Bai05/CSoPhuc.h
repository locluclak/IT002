#include <iostream>
using namespace std;

#pragma once
class CSoPhuc
{
private:
	float thuc;
	float ao;
public:
	CSoPhuc(float = 0, float =0);
	~CSoPhuc();
	friend ostream& operator<<(ostream&, const CSoPhuc&);
	int Getthuc() const;
	int Getao() const;
	CSoPhuc& operator=(const CSoPhuc&);
};

