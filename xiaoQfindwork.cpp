//I think this one is interesting too. greed algorithm
//https://www.nowcoder.com/practice/3a3577b9d3294fb7845b96a9cd2e099c?tpId=98&tqId=32826&tPage=1&rp=1&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	char* st;;
	int t;
	int n;
	int count = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		st = (char*)malloc(sizeof(char)*(n + 1));
		cin >> st;
		int j = 0;
		count = 0;
		while (j < n)
		{
			if (st[j] == '.')
			{
				count++;
				j += 3;
			}
			else if (st[j] == 'X')
				j++;
		}
		cout << count << endl;
	}
	return 0;
}