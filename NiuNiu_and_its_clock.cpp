#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;
int compare(int H, int M, int A, int B, int X);
bool cmp1(pair<int, int>a, pair<int, int>b);
int main()
{
	int N;
	vector<pair<int, int>> timer;
	int X;
	int A, B;
	int tH, tM;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int tmpH, tmpM;
		cin >> tmpH >> tmpM;
		timer.push_back({ tmpH,tmpM });
	}
	sort(timer.begin(), timer.end(), cmp1);
	cin >> X >> A >> B;

	for (int i = 1; i < N; i++)
	{
		tH = timer[i - 1].first;
		tM = timer[i - 1].second;
		if (compare(timer[i].first, timer[i].second, A, B, X) == 1)
		{
			printf("%d %d\n", tH, tM);
			break;
		}
	}
	return 0;
}
int compare(int H, int M, int A, int B, int X)
{
	H = (H + (M + X) / 60) ;
	M = (M + X) % 60;
	if (H > A || (H == A && M > B))
	{
		return 1;//Ã»µ½
	}
	else
		return 0;
}
bool cmp1(pair<int, int>a, pair<int, int>b)
{
	if (a.first < b.first || (a.first == b.first&&a.second < b.second))
		return true;
	else
		return false;
}