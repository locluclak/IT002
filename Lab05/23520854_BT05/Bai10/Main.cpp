#include "CDuongTron.h"
#include "../Bai01/CDiem.h"

int main()
{
	CDiem A(1, 2);
	CDuongTron B, C(A, 2);
	B = C;
	cout << B;
	return 0;
}