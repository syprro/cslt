#include <iostream>
#include <conio.h>
using namespace std;
bool lasonguyento(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem++;
		}
	}
		if (dem == 2)
			return true;
		return false;
}
int main()
{
	int n;
	do {
		cout << "Nhap so nguyen duong n (N<100): ";
		cin >> n;
		if (n <= 0 || n >= 100) {
			cout << "Gia tri khong hop le, vui long nhap lai!" << endl;
		}
	} while (n <= 0 || n >= 100);
	int tong = 0;
	cout << "Cac so nguyen to nho hon " << n << " la: ";
	for (int i = 2; i < n; i++) {
		if (lasonguyento(i)) {
			cout << i << " ";
			tong += i;
		}
	}
	cout << "\nTong cac so nguyen to nho hon " << n << " = " << tong << endl;
	int t = _getch();
	return 0;
}