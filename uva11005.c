#include <stdio.h>

int main()
{
    int testcase = 0 , i = 0,cost[36];
    int N = 0;
    long long int number = 0,temp = 0, total = 0;
    int base = 0;
    long long int min = 0;
    int cheaplist[36],cheapcount= 0,case1 = 1;
    
  /*第一個輸入testcase
    第二個輸入 0~35他們分別的cost
    第三個輸入 接下來會有N個數字
    第四個輸入 第N個數字是多少
    開始算第N個數字的需要的base*/
  
  
    //each char cose 0~36
    scanf("%d",&testcase);
    while(testcase--)
    {
        for(i = 0 ; i < 36;i++)
        {
            scanf("%d",&cost[i]);
        }
        printf("Case %d:\n",case1);
        case1++;
        scanf("%d",&N);// number of n 
        while(N--)
        {
            for(i = 0 ; i < 36;i++)
            {
                cheaplist[i] = 0;
            }
            scanf("%ld",&number);//using ? base
            min = 2000000000;
            cheapcount=0;
            
            for(base = 2 ;base <37;base++)//base 2~36
            {
                total = 0;
                temp = number;
                while(temp > 0)
                {
                    total += cost[temp%base];//calculator all number cost
                    temp /= base;
                }
                if(total < min)
                {
                   min = total;
                   cheaplist[0] = base;
                   cheapcount=1;
                }
                else if(total == min)
                {
                   cheaplist[cheapcount++]= base;
                }
            }
            printf("Cheapest base(s) for number %d:",number);
            for(i = 0 ;i<cheapcount;i++)
            {
                printf(" %d",cheaplist[i]);
            }
            printf("\n");
        }
        if(testcase>=1) printf("\n");
        
    }
}
