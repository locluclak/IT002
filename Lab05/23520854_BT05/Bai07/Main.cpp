#include "CThoiGian.h"

int main()
{
	CThoiGian a, b(1, 3, 4), c(2, 1), d(4);
	a = b = c = d;
	cout << a << ' ' << b << ' ' << c << ' ' << d;
	return 0;
}