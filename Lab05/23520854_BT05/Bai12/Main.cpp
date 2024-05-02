#include "CDiemKhongGian.h"
#include "CHinhCau.h"

int main()
{
	CDiemKhongGian A(1, 2, 3);
	CHinhCau B, C(A, 5);
	B = C;
	cout << B;
	return 0;
}