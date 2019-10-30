#include<iostream>
#include<algorithm>
using namespace std;
typedef pair<int, int>work;
int main()
{
    int N, M;
    int i, j;
    work data1[100001];
    work data2[100001];
    cin >> N >> M;
     
    int high[100001];
    for (i = 0; i < N; i++)
    {
        cin >> data1[i].first >> data1[i].second;
    }
    sort(data1, data1 + N);
    for (i = 0; i < M; i++)
    {
        cin >> data2[i].first;
        data2[i].second = i;
        high[i] = 0;
    }
    sort(data2, data2 + M);
    int cur = 0;
    for (i = 0, j = 0; j < M; j++)
    {
        while (i < N && data1[i].first <= data2[j].first)
        {
            cur = max(cur, data1[i].second);
            i++;
        }
        high[data2[j].second] = cur;
    }
    for (i = 0; i < M; i++)
    {
        cout << high[i] << endl;
    }
    return 0;
}