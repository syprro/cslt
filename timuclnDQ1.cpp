#include <iostream>
#include <conio.h>
using namespace std;
int timUCLN(int a, int b)
{
	if (a==b)
		return a;
	if (a > b)
		return timUCLN(a - b, b);
	else 
		return timUCLN(a, b - a);
}
int main()
{
	int a, b;
	cout << "Nhap hai so nguyen duong a va b: ";
	cin >> a >> b;
	if (a <= 0 || b <= 0) {
		cout << "Gia tri khong hop le, vui long nhap lai!" << endl;
	}
	else {
		cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << timUCLN(a, b) << endl;
	}
	int t = _getch();
	return 0;
}