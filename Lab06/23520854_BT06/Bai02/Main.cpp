#include "iostream"
#include "CSoPhuc.h"
using namespace std;

int main()
{
	CSoPhuc A(1, 2), B(1, 2);
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	return 0;
}