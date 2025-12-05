#include <iostream>
using namespace std;
int Gt(int n) {
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s = s * i;
	}
	return s;
}
int main() 
{
	int n,k;
	cout << "Nhap so n: ";
	cin >> n;
	cout << "Nhap so k: ";
	cin >> k;
	cout << "To hop cua " << n << " va " << k << " la: " << Gt(n) / (Gt(k) * Gt(n - k)) << endl;
	return 0;
}
