#include<stdio.h>

int main()
{
    int H1 =0, M1= 0, H2= 0, M2= 0, sum = 0;
    while(scanf("%d %d %d %d", &H1, &M1, &H2, &M2) != EOF)
    {
        if(H1 == 0 && M1 == 0 && H2== 0&& M2 == 0)
        {
           break;
        }
        if(H1 < 0 || H1 > 23 || H2 < 0|| H2>23 || M1 <0 ||M1>59 || M2 >59 ||M2 < 0) break;
        if(M2 - M1 < 0)
        {
           M2 = M2 + 60 - M1;
           H2 = H2 -1;
        }
        else
        {
           M2 = M2 - M1;
        }
        if(H2-H1 < 0)
        {
           H2 = 24 + H2 - H1;
        }
        else
        {
           H2 = H2 -H1;
        }
        sum = H2*60 + M2;
        printf("%d\n", sum);
    }
}
