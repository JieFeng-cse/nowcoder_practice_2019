/*
energy stone 
Google kick start 2019 ground B，problem B
*/

#include<iostream>
#include<algorithm>
using namespace std;
const int N=110,M=10010;//初始化，其实就是背包问题，N就是能量石个数，M是总的时间
int n;
struct Stone
{
	int s,e,l;
	bool operator < (const Stone &W)const
	{
		return s * W.l < W.s * l;
	}//重定义
}stones[N];//N个stone提前定义

int f[N][M];//全局变量，自动初始化为0

int main()
{
	int T;
	cin>>T;//循环次数，就是不同的case，和主任务无关
	for(int C = 1; C <= T; C++)
	{
		cin>>n;//n个能量石
		int m=0;
		for(int i = 1; i <= n; i++)
		{
			int s,e,l;
			cin>>s>>e>>l;
			stones[i] = {s,e,l};
			m += s;//总的消耗时间，相当于总体积
		}
		sort(stones + 1 , stones + 1 + n);//排序为升序，注意因为<重载了，所以排序算法有变化
		//贪心算法
		//DP问题的解决
		for(int i = 1; i <= n; i++)
		{
			for(int j = 0; j <= m; j++)
			{
				f[i][j]=f[i-1][j];//假设没有取第i个
				if(j >= stones[i].s)//还剩余的时间大于第i个物体所要消耗的时间,也就是说能吃的下第i个
				{
					int s = stones[i].s,e=stones[i].e,l=stones[i].l;
					f[i][j]=max(f[i][j],f[i-1][j-s] + max(0,e - l * (j-s)));//吃了第i个和没吃第i个的最大值
				}
			}
		}
		int res = 0;
		for(int i = 0; i <= m ; i++)
		{
			res = max(res,f[n][i]);
		}//枚举找出最大值
		printf("Case #%d: %d\n",C,res);//按照规则输出
	}
	return 0;//AC！！！！！
}