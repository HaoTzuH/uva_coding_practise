#include <stdio.h>

int base2(int b)
{
    int count = 0;
    while(b > 0)
    {
        if(b == 1)
        {
           count++;
           break;
        }
        if(b%2)
        {
           count++;
        }
        b = b / 2;
    }
    return count;
}

int main()
{
    int N = 0, M = 0, i = 0;
    scanf("%d", &N);
    int count_b1 = 0, count_b2 = 0;
    while(N--)
    {
        scanf("%d", &M);
        int M_b1 = 0,M_b2=0, de_b2 = 0;
        M_b1 = M;
        M_b2 = M;
        count_b1 = 0, count_b2 = 0;
        de_b2 = 0;
        i = 0;
        count_b1 = base2(M_b1);
        //M_b2 to base16
        while(M_b2 > 0)
        {
            de_b2 = ((M_b2 % 10) << (4*i)) + de_b2;
            //printf("%d \n",de_b2);
            M_b2 = M_b2 / 10;
            i++;
        }
        count_b2 = base2(de_b2);
        printf("%d %d\n",count_b1, count_b2);
       
    }
}
