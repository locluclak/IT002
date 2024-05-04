#include "iostream"
#include "CSoPhuc.h"
using namespace std;

int main()
{
	cout << "+ - * /" << endl;
	CSoPhuc A(1, 2), B(1, 2);
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;

	cout << endl << "+= -= *= /=" << endl;
	A += B;
	cout << A << endl;
	A -= B;
	cout << A << endl;

	A *= B;
	cout << A << endl;

	A /= B;
	cout << A << endl;
	
	cout <<endl<< "++ --" << endl;
	A++;
	cout << A << endl;
	A--;

	cout << A << endl;

	return 0;
}