#include <iostream>
#include <conio.h>
using namespace std;
bool laSNto(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++) {
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap so nguyen n (2<=n<=30): ";
		cin >> n;
	} while (n < 2 || n>30);
	if (laSNto(n))
		cout << n << " la so nguyen to." << endl;
	else
		cout << n << " khong phai la so nguyen to." << endl;
	cout << "Cac so nguyen to nho hon " << n << " la: ";
	int tong = 0;
	for (int i = 2; i < n; i++) {
		if (laSNto(i)) {
			cout << i << " ";
			tong += i;
		}
	}
	cout << "\nTong cac so nguyen to nho hon " << n << " = " << tong << endl;
	int t = _getch();
	return 0;
}