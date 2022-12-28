//題目要花時間理解一下


#include <stdio.h>
#include <stdlib.h>



int main()
{
    long interS = 0 , count = 0, i = 0, sum = 0;
    while(scanf("%ld", &interS) != EOF)
    {
        if(interS > 100000000 || interS < 1) break;
        count = 0;
        for(i = 0 ;   ;i++)
        {
            count = count + i;
            if(count-interS>0)
            {
               printf("%ld %ld\n",count-interS, i);
               break;
            }
        }
    }
}
