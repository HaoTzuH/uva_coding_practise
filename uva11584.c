//DP

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char str[1000];

int ispalindrome(int l, int r)
{
    while(l < r)
    {
       
        if(str[l] != str[r]){ return 0;}
        ++l;
        --r;
    }
    return 1;
}

int main()
{
   int inputN = 0;
   int longg = 0 , i = 0, j = 0;
   int dp[1000];
   scanf("%d", &inputN);
   while(inputN--)
   {
       
       scanf("%s", str);
       longg= strlen(str);
       for(i = 0; i < 1000;i++) dp[i]= 0;
       if(longg<=1)
       { 
          printf("%d\n", longg); 
          continue;
       }
       dp[0] = 0;
       dp[1] = 1;
      
       for(i = 2; i <= longg; i++)
       {
          dp[i] = dp[i-1]+1;
          for(j = 0; j < i; j++)
          {
             // printf("%c %c",str[j],str[i-1]);
              if(ispalindrome(j,i-1))
              {
                 if(dp[j]+1 > dp[i])
                 {
                    dp[i] = dp[i];
                 }
                 else
                 {
                    dp[i] = dp[j]+1;
                 }
              }
          }
       }
       printf("%d\n", dp[longg]);
   }
}
