#include <stdio.h>

int main()
{
   int intcoal = 0;
   int coal1 = 0;
   int i= 0;
   while(scanf("%d",&intcoal)!= EOF)
   {
       coal1 = 0;
       if(intcoal < 1||intcoal > 200) break;
       for(i = 1 ; i <= intcoal ; i++)
       {
           if(i%2)
           {
              coal1 = coal1+1;
           }
           else
           {
              coal1 = coal1 + 2;
           }
       }
       printf("%d\n",coal1);
   }
}
