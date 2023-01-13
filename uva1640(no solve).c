// 暴力解會timeout

// 還沒參透DP 先擺著


#include <stdio.h>

int numbercount[10];

/*int function(int a)
{
   //100000000
   int j = 0, k = 1;
   for(j = 100000000 ; j > 0 ; j = j /10)
   {
       if(a / j == 0)
       {
          k++;
       }
       else
       {
          return 8-k;
       }
   }
   
}*/

   while(a > 0)
   {
       
       
       numbercount[a%10]++;
       a= a / 10;
       
   }

int main()
{
    int lines = 0;
    int inputa = 0, inputb = 0, i = 0, j = 0,temp = 0;
    
    while(lines < 500)
    {
        scanf("%d %d", &inputa, &inputb);
        if(inputa > inputb)
        {
           temp = inputa;
           inputa = inputb;
           inputb = temp;
        }
        if(inputa < 0 || inputb > 1000000000)
        {
           break;
        }
        if(inputa ==0 && inputb ==0)
        {
           break;
        }
        for(i = 0 ; i < 10;i++)
        {
           numbercount[i]=0;
        }
        
        
          
        while(i <= inputb)
        {
            temp = i;
            while(temp > 0)
            {
       
                numbercount[temp%10]++;
                temp= temp / 10;
       
            }
            i++;
        }
            
        for(j = 0; j < 9 ; j++)
        {
            printf("%d ",numbercount[j]);
        }
        printf("%d\n",numbercount[9]);
    }
}
