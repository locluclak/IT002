#include "CDiem.h"
#include "iostream"
using namespace std;
int main()
{
	CDiem A(1,2), B(1, 1);
	cout << (A < B) << endl;
	cout << (A > B) << endl;
	cout << (A <= B) << endl;
	cout << (A >= B) << endl;
	cout << (A == B) << endl;
	cout << (A != B) << endl;
	return 0;
}