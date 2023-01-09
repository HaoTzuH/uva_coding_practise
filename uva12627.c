////// I'm google this answer


#include <stdio.h>

long long dp[31];//range 0~30

long long f(int k, int r)// k-day, r row
{
   if(k == 0)
   {
      if(r == 1) return 1;
      else{return 0;}
   }
   if(r == (1<<k))
   {
      return dp[k];
   }
   k--;
   if(r <= (1<<k))//up
   {
     return 2*f(k,r);//up f(k-1)+f(k-1)
   }
   else
   {
      return 2*dp[k]+f(k,r-(1<<k));
   }
   
}

int main()
{
    int inputT = 0, i = 0, inputA = 0,inputB = 0, inputK = 0;
    long long ans = 0;
    dp[0] = 1;
    for(i = 1; i < 31 ;i++)
    {
      dp[i]=dp[i-1]*3;
    }
    scanf("%d", &inputT);
    i= 1;
    while(inputT--)
    {
        scanf("%d %d %d",&inputK,&inputA,&inputB);
        ans = f(inputK,inputB)-f(inputK,inputA-1);
        printf("Case %d: %lld\n",i, ans);
        i++;
    }
}
