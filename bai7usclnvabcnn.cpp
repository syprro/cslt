#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap hai so nguyen duong a va b: ";
	cin >> a >> b;
	int x = a, y = b;
	while (x != y)
	{
		if (x > y)
			x = x - y;
		else y = y - x;
	}
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << x << endl;
	cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << (a * b) / x << endl;
	int t = _getch();
	return 0;
}