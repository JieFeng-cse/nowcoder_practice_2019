#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    double sum_sober = 0;
    double sum_sleepy = 0;
    double max = 0;
    double test;
    int num_sleepy;
    vector<int> a;
    vector<int> t;
    vector<pair<int,int>> sober;
    vector<pair<int,int>> sleepy;
    cin>>n>>k;
    for(int i = 0; i< n; i++)
    {
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    for(int i = 0; i< n; i++)
    {
        int tmp;
        pair<int,int> tmpp;
        cin>>tmp;
        t.push_back(tmp);
        if(tmp==0)
        {
            tmpp.first = i;
            tmpp.second = a[i];
            sleepy.push_back(tmpp);
        }
        else
        {
            tmpp.first = i;
            tmpp.second = a[i];
            sober.push_back(tmpp);
            sum_sober+=a[i];
        }
    }
    num_sleepy = sleepy.size();
    for(int i = 0; i < num_sleepy && i <= n - k; i++)
    {
        for(int j = sleepy[i].first; j < sleepy[i].first + k; j++)
        {
            if(t[j]==0)
                test+=a[j];
        }
        if(test > max)
            max = test;
        test = 0;
    }
    max = max + sum_sober;
    cout<<(unsigned long)max<<endl;
}