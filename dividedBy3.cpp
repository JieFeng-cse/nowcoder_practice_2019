#include<iostream>
using namespace std;
int main()
{
	int l, r;
	int m, n, n2;
	cin >> l >> r;
	m = (l-1) % 3;
	if (m == 1 || m == 0)
	{
		n = 2 * int((l-1) / 3);
	}
	else if (m == 2)
		n=2 * int((l-1) / 3) + 1;
	m = r % 3;
	if (m == 1 || m == 0)
	{
		n2 = 2 * int(r / 3);
	}
	else if (m == 2)
		n2=2 * int(r / 3) + 1;
	n2 = n2 - n;
	cout << n2 << endl;
	return 0;
}