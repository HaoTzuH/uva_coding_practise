
// int 範圍2147483647
// 題目最多 100000000
// 解題從dp[2]開始

#include <stdio.h>

int dp[45];



int main()
{
    int N = 0 , i = 0, fib= 0;
    bool now = false;
    scanf("%d", &N);
    for(i = 0 ; i < 45;i++)
    {
        dp[i] = 0;
    }
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for(i = 3 ; i < 45;i++)
    {
        dp[i] =  dp[i-1] + dp[i-2];
        //printf("%d ", dp[i]);
        if(dp[i] > 2147483647) break;
    }
    while(N--)
    {
        scanf("%d",&fib);
        printf("%d = ",fib);
        
        now = false;
        if(fib < 3)
        {
           for(i = fib+1 ; i > 1 ; i--)
           {
               if(fib - dp[i] == 0) printf("1");
               else
               {
                  printf("0");
               }
           }
        }
        else
        {
           for(i = 44 ; i > 1;i--)
           {
               if(fib - dp[i] == 0 || fib -dp[i] > 0)
               {
                  printf("1");
                  fib = fib - dp[i];
                  now = true;
                  //printf("%d ", dp[i]);
                  
               }
               else if(fib - dp[i] < 0 && now)
               {
                  printf("0");
               }
           }
        }
        printf(" (fib)\n");
        
    }
}
