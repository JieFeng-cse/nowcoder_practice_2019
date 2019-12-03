#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
int map[1000];
int main()
{
	int n, m;
	int tmp;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		map[tmp]++;
	}
	sort(map, map + m-1, greater<int>());
	cout << map[n-1];
	return 0;
}