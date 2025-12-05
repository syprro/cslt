#include <iostream>
#include <conio.h>
using namespace std;
int Fibo(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} return Fibo(n - 1) + Fibo(n - 2);
}
int main() {
	int n;
	do {
		cout << "Nhap so n (1<=n): ";
		cin >> n;
		if (n<1) {
			cout << "Gia tri khong hop le, vui long nhap lai!\n";
		}
	} while (n < 1);
	cout << "Day Fibonacci thu " << n << " la: " << Fibo(n) << endl;
	int t = _getch();
	return 0;
}