#include "../Bai01/CDiem.h"
#include "CTamGiac.h"

int main()
{
	CDiem A, B(1, 2), C(5, 0);
	CTamGiac D(A, B, C), E(0, 0, 3, 1, 5, 0);
	return 0;
}