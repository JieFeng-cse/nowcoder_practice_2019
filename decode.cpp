#include<iostream>
#include<vector>
using namespace std;//use dynamic planning to solve 
int main()
{
    int N;
    int allN;
    string message;
    cin>>message;
    N=message.length();
    vector<int> SolveN(N+1,0);
    SolveN[0]=1;
    SolveN[1]=1;
    for(int i=2;i<=N;i++)
    {
        if(message[i-2]=='1'||(message[i-2]=='2'&&message[i-1]<='6'))
            SolveN[i]=SolveN[i-1]+SolveN[i-2];//if the number before is 1,or before + now <26, it means it can use two as a match, so this N have to part
        else//first one is just the one before, because the new one will not change the num of types, second one can split two in the end out, then the type=type[n-2]
            SolveN[i]=SolveN[i-1];//In the end there is no possibility to match two, so the only choice is the last one itself + the rest, so the num of types=type[n-1]
    }
    cout<<SolveN[N]<<endl;//output
    return 0;
}