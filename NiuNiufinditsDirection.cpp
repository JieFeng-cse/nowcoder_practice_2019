#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char s[1000] = { '\0' };
    char v;
    cin >> s;
    char vec[4] = { 'N', 'E', 'S', 'W' };//对应着北，东，南，西
    int len = strlen(s);
    int now = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'R'){
            now = now + 1;
            if (now > 3)
                now = 0;
        }
 
        if (s[i] == 'L'){
            now = now - 1;
            if (now < 0)
                now = 3;
        }
 
    }
    cout << vec[now] << endl;
    return 0;
}