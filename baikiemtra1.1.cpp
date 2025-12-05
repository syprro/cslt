#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int Tong(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s = s + i * i;
	}
	return s;
}
double Tong2(int n) {
	float s = 0;
	for (int i = 1; i <= n; i++) {
		s += (1.0 / (i * i));
	}
	return s;
}
int main()
{
	int n;
	do 
	{
		cout << "Nhap so n (0 < n < 50): ";
		cin >> n;
		if (n <= 0 || n >= 50) {
			cout << "Gia tri khong hop le, vui long nhap lai!\n";
		}
	} while (n <= 0 || n >= 50);
	cout << "Tong cua binh phuong cac so tu 1 den " << n << " la: " << Tong(n) << endl;
	cout << fixed << setprecision(3);
	cout << "Tong cua 1 chia binh phuong cac so tu 1 den " << n << " la: " << Tong2(n) << endl;
	int t = _getch();
	return 0;
}