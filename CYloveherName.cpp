#include<iostream>
#include<vector>
using namespace std;
int modd = 1e9 + 7;
//我觉得这个思路比较重要，就是在之前的基础上加后一个字符，来满足要求
//这里num1[i][0]就是指结尾是c，num1[i][1]就是指结尾是y
//想要以y结尾，上一个怎么搭配都行；想要以c结尾，则上一个必须是y，所以有了迭代式的加法
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> num1(N+2, vector<int>(2, 0));
    num1[1][0] = 1;
    num1[1][1] = 1;
    for (int i = 2; i <= N; i++)
    {
        num1[i][1] = num1[i - 1][0]%modd;
        num1[i][0] = (num1[i - 1][0] + num1[i - 1][1])%modd;
    }
    cout << (num1[N][0] + num1[N][1]) % modd << endl;
    return 0;
}