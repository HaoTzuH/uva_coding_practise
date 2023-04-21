#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isemipr(long long int a)
{
    long long int i = 0;
    for(i = 2; i < a;i++)//質數除了1和自己以外
    {
        if(a%i == 0)
        {
           return 1;
        }
    }
    return 0;
}

int main()
{
    long long int N = 0,count = 0;
    char resver[1000000];
    long long int i = 0;
    bool flag1 = false,flag2 = false;
    while(scanf("%ld", &N)!=EOF)
    {
        flag1 = false;
        flag2 = false;
        count = 0;
        printf("%ld ",N);
        if(isemipr(N) == 0)
        {
           flag1 = true;
           if(flag1)
           {
              sprintf(resver,"%ld",N);
              for(i = strlen(resver)-1; i>=0;i--)
              {
                  count = count*10+(resver[i]-'0');
              }
              if(count == N)
              {
                 flag2 = false;
              }
              else
              {
                 if(isemipr(count) == 0)
                 {
                    flag2 =true;
                 }
              }
              
           }
        }
        if(flag1 && flag2)
        {
           printf("is emirp.\n");
        }
        else if(flag1 || flag2)
        {
           printf("is prime.\n");
        }
        else
        {
           printf("is not prime.\n");
        }
    }
}
