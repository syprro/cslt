#include <iostream>
using namespace std;
int TongChan(int n)
{
	if (n < 10) {
		if (n % 2 == 0)
			return n;
		else
			return 0;
	}
	else {
		if (n % 2 == 0)
			return (n % 10) + TongChan(n / 10);
		else
			return TongChan(n / 10);
	}
}
int main()
{
		int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if (n <= 0) {
		cout << "Gia tri khong hop le, vui long nhap lai!" << endl;
	}
	else cout << "Tong cac chu so chan trong " << n << " la: " << TongChan(n) << endl;
	return 0;
}