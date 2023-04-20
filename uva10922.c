#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int degree(char *str)
{
    int i = 0,D=0;
    int multi = 0;
    if(strlen(str)==1&&str[0]=='9') return 1;
    while(strlen(str) >1)
    {
       multi= 0;
       for(i = 0; i <strlen(str);i++)
       {
          multi = multi + str[i]-'0';
       }
       if(multi % 9 ==0)
       {
          D++;
       }
       sprintf(str,"%d",multi);
    }
    return D;
}

int main(){
    char N[1001];
    int D=0;
    while(scanf("%s",N)!=EOF)
    {
        if(N[0]=='0')
        {
           break;
        }
        printf("%s",N);
        D = degree(N);
        if(D)
        {
           printf(" is a multiple of 9 and has 9-degree %d.\n",D);
        }
        else
        {
           printf(" is not a multiple of 9.\n");
        }
    }
}
