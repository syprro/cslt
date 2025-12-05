#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so luong  so nguyen to can in: ";
	cin >> n;
	int dem = 0;
	cout << "Cac so nguyen to dau tien la: ";
	for (int i = 2;; i++)
	{
		int kt = 1;
		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				kt = 0;
				break;
			}
		}
		if (kt == 1)
		{
			cout << i << " ";
			dem++;
		}
		if (dem == n)
			break;
	}
	int t = _getch();
	return 0;
}