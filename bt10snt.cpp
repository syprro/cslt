#include <iostream>
#include <conio.h>
using namespace std;
int lasonguyento(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem++;
		}
	}
	if (dem == 2) return 1;
	else return 0;
}
int main()
{
	int n;
	do {
		cout << "Nhap so nguyen duong n (N<100): ";
		cin >> n;
		if (n<= 0 || n >= 100) {
			cout << "Gia tri khong hop le, vui long nhap lai!\n";
		}
	} while (n <= 0 || n >= 100);
	if (lasonguyento(n) == 1) {
		cout << n << " la so nguyen to." << endl;
	}
	else {
		cout << n << " khong phai la so nguyen to." << endl;
	}
	cout << "\nCac so nguyen to nho hon " << n << " la: ";
	int tong = 0;

	for (int i = 2; i < n; i++) {
		if (lasonguyento(i) == 1) {  
			cout << i << " ";
			tong += i;
		}
	}
	cout << "\nTong cac so nguyen to nho hon " << n << " = " << tong << endl;
	int t = _getch();
	return 0;
}