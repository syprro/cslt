#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n;
	do {
		cout << "Nhap n (n > 0): ";
		cin >> n;
	} while (n <= 0);
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
		cout << n << " la so nguyen to." << endl;
	else
		cout << n << " khong phai la so nguyen to." << endl;
	return 0;
}