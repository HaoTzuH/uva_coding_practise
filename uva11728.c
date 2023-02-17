#include <stdio.h>

//
int perimus(int input)//prime
{
    int i = 0, counter = 0;
    int noperimus = 0;
    for(i = 1; i <= input ;i++)
    {
        if(input % i == 0)
        {
           counter++;
        }
    }
    if(counter > 2)
    {
       return noperimus;
    }
    if(counter == 2)
    {
       noperimus = 1;//is prime
       return noperimus;
    }
}



int main()
{
   int inputS = 0, CaseN = 1;
   
    int i = 0, j = 0, sumof = 0, k = 0, flage = 0;
    int array[1000];
    for(i = 0; i < 1000 ; i++)
    {
        array[i]= 0;//inital
    }
    for(i = 1; i <=1000; i++)//10
    {
        for(j = 1 ; j <= i ;j++)
        {
            if(i % j == 0) 
            {
               sumof = sumof + j; 
            }
        }
        array[k] = sumof;
        k++;
        sumof = 0;
    }
   while(scanf("%d", &inputS))
   {
       if(inputS == 0) break;
       
       if(inputS == 1)
       {
          printf("Case %d: 1\n",CaseN);
       }
       else
       {
          if(perimus(inputS-1))
          {
             printf("Case %d: %d\n",CaseN ,inputS-1);
          }
          else
          {
             flage= 0;
             for(i = 0; i < inputS; i++)
             {
                 if(inputS == array[i])
                 {
                     k = i;
                     //printf("Case %d: %d\n",CaseN ,i+1);
                     flage = 1;
                 }
                 
             }
             if(flage)
             {
                printf("Case %d: %d\n",CaseN ,k+1);
             }
             
             if(flage==0)
             {
                printf("Case %d: -1\n",CaseN);
             }
          }
       }
       
       CaseN++;
   }
   
}
