#include <iostream>
using namespace std;
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
	CDiem A, B , C;
	cout << "Nhap ba diem: ";
	cin >> A >> B >> C;
	cout << "Toan tu bang cua CDiem: " << A == B;
	cout << "Toan tu khac cua CDiem: " << A != C;
	
	CNgay D, E, F;
	cout << "Nhap ba ngay: ";
	cin >> D >> E >> F;
	cout << "Toan tu bang cua CNgay: " << D == E;
	cout << "Toan tu khac cua CNgay: " << D != F;

	CThoiGian G, H, I;
	cout << "Nhap ba thoi gian: ";
	cin >> G >> H >> I;
	cout << "Toan tu bang cua CThoiGian: " << G == H;
	cout << "Toan tu khac cua CThoiGian: " << G != I;

	CDonThuc J, K, L;
	cout << "Nhap ba don thuc: ";
	cin >> J >> K >> L;
	cout << "Toan tu bang cua CDonThuc: " << J == K;
	cout << "Toan tu khac cua CDonThuc: " << J != L;

	CDiemKhongGian M, N, O;
	cout << "Nhap ba diem khong gian: ";
	cin >> M, N, O;
	cout << "Toan tu bang cua CKhongGian: " << M == N;
	cout << "Toan tu khac cua CKhongGian: " << M != O;

	CDuongThang P, Q, R;
	cout << "Nhap ba duong thang: ";
	cin >> P >> Q >> R;
	cout << "Toan tu bang cua CDuongThang: " << P == Q;
	cout << "Toan tu khac cua CDuongThang: " << P != R;

	CTamGiac S, T, U;
	cout << "Nhap ba tam giac: ";
	cin >> S >> T >> U;
	cout << "Toan tu bang cua CTamGiac: " << S == T;
	cout << "Toan tu khac cua CTamGiac: " << S != U;

	CHinhCau V, W, X;
	cout << "Nhap ba hinh cau: ";
	cin >> V >> W >> X;
	cout << "Toan tu bang cua CHinhCau: " << V == W;
	cout << "Toan tu khac cua CHinhCau: " << V != X;

	return 0;
}