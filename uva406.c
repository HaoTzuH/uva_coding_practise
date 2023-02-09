
//503 13
//1000 20
 //此題1也算質數
#include <stdio.h>

int primed(int check)
{
    int i = 0,count=0;
    for(i = 1; i <= check; i++)
    {
        if(check % i)
        {
        }
        else
        {
           count++;
        } 
    }
    if(count > 2)
    {
       return 0;
    }
    else
    {
       return 1;
    }
}

int main()
{
    int inputN = 0, inputC = 0, i= 0;
    int j = 0, count = 0 , lenthg = 0, output = 0;
    
    while(scanf("%d %d",&inputN ,&inputC)!= EOF)
    {
        //jugeodd
        
        int array_prime[inputN];
        for(i = 0 ; i < inputN; i++)
        {
            array_prime[i] = 0;
        }
        count=0;
        for(i = 1 ; i <= inputN ; i++)
        {
            if(primed(i))
            {
              array_prime[count] = i;
              count++;
              
            }
        }
        //printf("%d\n", count);
        printf("%d %d:", inputN, inputC);
        if(inputC*2 < count)
        {
           lenthg = 1;//(count-(inputC*2))/2;
           output = (count-(inputC*2-1))/2; //(總質數-要輸出的質數個數)/2 等於輸出質數的開始
           if(count % 2 != 0)
           {
              for(i = output ;;i++)
              {
                 printf(" %d", array_prime[i]);
                 lenthg++;
                 if(lenthg > inputC*2 -1) break;
              }
           }
           else
           {
              lenthg = 1;//(count-(inputC*2))/2;
              output = (count-(inputC*2))/2; //這邊是重點,決定要輸出誰。 題目只講從center輸出但是解答不像真的從中間
              for(i = output ;;i++)
              {
                 printf(" %d", array_prime[i]);
                 lenthg++;
                 if(lenthg > inputC*2) break;
              }
           }
        }
        else
        {
           for(i = 0 ; i < count; i++)
           {
               printf(" %d", array_prime[i]);
                
           }
        }
       
        printf("\n");
        printf("\n");
        
       
    }
}
