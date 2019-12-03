#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
	int a[3];
	int sum;
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 2);
	if (a[2] == 1)
	{
		sum = a[0] + a[1] + a[2];
	}
	else if (a[0] + a[1] > a[0] * a[1])
	{
		sum = (a[0] + a[1])*a[2];
	}
	else
	{
		sum = a[0] * a[1] * a[2];
	}
	cout << sum << endl;
	return 0;
}