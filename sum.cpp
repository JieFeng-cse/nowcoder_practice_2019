#include<iostream>
#include<stdio.h>
using namespace std;
long long pow2(int i) {
    int j;
    long long result;
    result = 1;
    for (int j = 1; j <= i; j++) {
        result *= 2;
            if (result > 998244353)
                result -= 998244353;
    }
    result -= 1;
    return result; 
}
int main() {
    long long result = 1;
    int n, t;
    int i, j;
    cin >> t;
    for (int r = 1; r <= t; r++) {
        result = 1;
        getchar();
        cin >> n;
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++) {
                if (i >= j)
                    result *= pow2(j);
                else
                    result *= pow2(i);
                if (result > 998244353)
                    result %= 998244353;
            }
                 
        cout << result << endl;
    }
}