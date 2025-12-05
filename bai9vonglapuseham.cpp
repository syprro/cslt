#include <iostream>
#include <conio.h>
using namespace std;
bool lasonguyento(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2)
		return true;
	return false;
}
int main()
{
	int n, tong = 0, i=2;
	cout << "Nhap so luong so nguyen to can in: ";
	cin >> n;
	cout << "\nCac so nguyen to dau tien la: ";
	while (tong < n)
	{
		if (lasonguyento(i))
		{
			cout << i << " ";
			tong++;
		}
		i++;
	}
	for (int i = 2; tong < n; i++)
	{
		if (lasonguyento(i))
		{
			cout << i << " ";
			tong++;
		}
	}
	int t = _getch();
	return 0;
}