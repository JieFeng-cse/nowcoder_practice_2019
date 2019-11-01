#include<iostream>
using namespace std;
int main()
{
    int N;
    int outN;
    string poster;
    cin>>poster;
    N=poster.length();
    outN=25*(N+1)+1;
    cout<<outN<<endl;
}