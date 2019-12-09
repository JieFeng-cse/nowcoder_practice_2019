#include<stdio.h>
#include<string.h>
int main()
{
    char input[100000];
    int  count[26]={0};
    scanf("%s",input);
    int i = 0 , j = 0 , t;
    while(input[i] != '\0')
    {
       t = input[i] - 'a';
       count[t] ++;
        i++;
    }
    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
            printf("%c%d",i +'a', count[i]);
    }
    return 0;
}
