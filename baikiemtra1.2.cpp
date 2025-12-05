#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int n;
		do {
			cout << "Nhap so n co 3 chu so: ";
			cin >> n;
			if (n < 100 || n > 999) {
				cout << "So ban vua nhap khong hop le, vui long nhap lai!" << endl;
			}
		} while (n < 100 || n > 999);
		int a = n / 100;
		int b = (n / 10) % 10;
		int c = n % 10;
		cout << a << " , " << b << " , " << c << endl;
		cout << "Tong cac chu so cua n la: " << a << " + " << b << " + " << c << " = " << a + b + c << endl;
		cout << "Tich cac chu so cua n la: " << a << " * " << b << " * " << c << " = " << a * b * c << endl;
		int t = _getch();
	return 0;
}