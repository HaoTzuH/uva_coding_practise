#include <stdio.h>

bool checkrepeat(int a,int i)
{
    bool check[10];
    int j = 0;
    for(j =0;j<10;j++)
    {
        check[j]=false;
    }
    if(a < 10000&& i < 10000)
    {
       return false;
    }
    if(a<10000||i<10000)
    {
       check[0]=true;
    }
    while(a>0)
    {
        if(check[a%10]) return false;
        check[a%10]=true;
        a/=10;
    }
    while(i>0)
    {
        if(check[i%10]) return false;
        check[i%10]=true;
        i/=10;
    }
    return true;
    
}

int main()
{
    //N= 2~79
    //98765~1234/2
    int intN = 0 ,i = 0, x= 0, y = 0;
    bool exist = false,end = false;
    while(scanf("%d",&intN)!=EOF)
    {
        if(intN == 0) break;
        if(end) printf("\n");
        end = false;
        for(i = 1234; i<=49382; i++)//N 2~79  98765/2=49382
        {
            x = intN*i;
            if(x > 98765) break;
            if(checkrepeat(x, i))
            {
               if(i < 10000)
               {
                  printf("%d / 0%d = %d\n",x,i,intN);
               }
               else printf("%d / %d = %d\n",x,i,intN);
               exist = true;
            }
           
        }
        if(!exist)
        {
           printf("There are no solutions for %d.\n",intN);
        }
        end = true;
        exist = false;
    }
}
