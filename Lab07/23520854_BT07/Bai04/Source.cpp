#include "CDiem.h"
#include "CNgay.h"
#include "CThoiGian.h"
#include "CDonThuc.h"
#include "CDiemKhongGian.h"
#include "CDuongThang.h"
#include "CTamGiac.h"
#include "CHinhCau.h"

int main()
{
	CDiem A, B;
	cout << "Nhap hai diem: \n";
	cin >> A >> B;
	cout << "Toan tu bang cua CDiem: " << boolalpha << (A == B) << '\n';
	cout << "Toan tu khac cua CDiem: " << boolalpha << (A != B) << '\n';
	
	CNgay C, D;
	cout << "Nhap hai ngay: \n";
	cin >> C >> D;
	cout << "Toan tu bang cua CNgay: " << boolalpha << (C == D) << '\n';
	cout << "Toan tu khac cua CNgay: " << boolalpha << (C != D) << '\n';

	CThoiGian E, F;
	cout << "Nhap hai thoi gian: \n";
	cin >> E >> F;
	cout << "Toan tu bang cua CThoiGian: " << boolalpha << (E == F) << '\n';
	cout << "Toan tu khac cua CThoiGian: " << boolalpha << (E != F) << '\n';

	CDonThuc G, H;
	cout << "Nhap hai don thuc: \n";
	cin >> G >> H;
	cout << "Toan tu bang cua CDonThuc: " << boolalpha << (G == H) << '\n';
	cout << "Toan tu khac cua CDonThuc: " << boolalpha << (G != H) << '\n';

	CDiemKhongGian I, J;
	cout << "Nhap hai diem khong gian: \n";
	cin >> I >> J;
	cout << "Toan tu bang cua CKhongGian: " << boolalpha << (I == J) << '\n';
	cout << "Toan tu khac cua CKhongGian: " << boolalpha << (I != J) << '\n';

	CDuongThang K, L;
	cout << "Nhap hai duong thang: \n";
	cin >> K >> L;
	cout << "Toan tu bang cua CDuongThang: " << boolalpha << (K == L) << '\n';
	cout << "Toan tu khac cua CDuongThang: " << boolalpha << (K != L) << '\n';

	CTamGiac M, N;
	cout << "Nhap hai tam giac: \n";
	cin >> M >> N;
	cout << "Toan tu bang cua CTamGiac: " << boolalpha << (M == N) << '\n';
	cout << "Toan tu khac cua CTamGiac: " << boolalpha << (M != N) << '\n';

	CHinhCau O, P;
	cout << "Nhap hai hinh cau: \n";
	cin >> O >> P;
	cout << "Toan tu bang cua CHinhCau: " << boolalpha << boolalpha << (O == P) << '\n';
	cout << "Toan tu khac cua CHinhCau: " << boolalpha << boolalpha << (O != P) << '\n';
	return 0;
}