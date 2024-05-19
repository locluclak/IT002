#include "CCongTy.h"

int main()
{
	CCongTy A;
	A.Nhap();
	cout << '\n';
	A.Xuat();

	string ht;
	cout << "\nNhap ho ten nhan vien can tim: ";
	getline(cin, ht);

	CNhanVien* p = nullptr;
	p = A.TimKiem(ht);
	if (p)
		p->Xuat();
	else
		cout << "Khong tim thay";
	return 0;
}