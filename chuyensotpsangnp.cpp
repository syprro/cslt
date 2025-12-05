#include <iostream>
using namespace std;
void NhiPhan(int n)
{
	if (n < 2)
		cout << n;
	else
	{
		NhiPhan(n / 2);
		cout << n % 2;
	}
}
int main()
{
	int n;
	cout << "Nhap so thap phan can doi sang nhi phan: ";
	cin >> n;
	cout << "So nhi phan tuong ung la: ";
	NhiPhan(n);
	return 0;
}