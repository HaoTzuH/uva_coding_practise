#include <stdio.h>

int dofunction(int n)
{
    int i = 1,temp = 0;
    while(n >= 10)
    {
        temp = temp + (n % 10);
        n = n/10;
        if(n <= 10)
        {
           n = temp + n;
           //printf("%d ",n);
           temp = 0;
        }
    }
    return n;
}

int main()
{
    int inputN= 0;
    
    while(scanf("%d",&inputN)!=EOF)
    {
       if(inputN == 0)break;
       if(inputN > 9)
       {
          printf("%d\n",dofunction(inputN));
       }
       else
       {
          printf("%d\n",inputN);
       }
    }
}
