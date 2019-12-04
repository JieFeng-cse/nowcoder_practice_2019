#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int n;
long w;
long ans = 0; //计数器
vector<long> vec;
void dfs(long sum,int loc);
 
int main()
{
    long total = 0;
    cin >> n;
    cin >> w;
    for(int i = 0;i < n;++i)
    {
        int x;
        cin >> x;
        vec.push_back(x);
        total += vec[i]; //所有放进去都成立
    }
    if(total <= w)
    {
        ans = pow(2,n);
    }
    else
    {
        sort(vec.begin(),vec.end());
        dfs(0,0);
    }
    cout << ans << endl;
    
    return 0;
}                                //dfs(0,0)       dfs(0,1)       dfs(0,2)
void dfs(long sum,int loc)       // 1 2 4       // 1 2 4       // 1 2 4  
{                                // 1      1    // 2      4         
    if(sum > w)                  // 1+2    2    // 2+4    5
        return ;                 // 1+2+4  3    
    if(sum <= w)
        ans++;
    for(int i = loc;i < n;++i)
    {
        dfs(sum+vec[i],i+1); //不断递归
    }
}