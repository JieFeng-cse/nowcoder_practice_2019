#include <iostream>
//#include <cmath>
using namespace std;

long long int power(int a, long long int b)
{
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    long long int n;

    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        cin >> n;

        long long int b = n - 1;//计算第一个pow
        long long int r1 = 1, base = 2;
        while (b != 0)
        {
            if (b % 2)
                r1 *= base;
            r1 %= 998244353;
            base *= base;
            base %= 998244353;
            b /= 2;
        }

        long long int result = 0;
        result = (n % 998244353) * r1;
        result %= 998244353;

        b = n;//计算第二个pow
        r1 = 1, base = 2;
        while (b != 0)
        {
            if (b % 2)
                r1 *= base;
            r1 %= 998244353;
            base *= base;
            base %= 998244353;
            b /= 2;
        }

        result += r1;
        result %= 998244353;
        cout << result << endl;
    }

    //system("pause");
    return 0;
}
