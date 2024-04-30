#include "CDiem.h"
#include "iostream"
using namespace std;
int main()
{
	CDiem A, B(0, 1);
	A = B;
	cout << A;
	return 0;
}