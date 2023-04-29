//新想法
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int N = 0;
   int count =0 , i = 0, k = 0;
   char base2[32];
   
   while(scanf("%d", &N) != EOF)
   {
       count = 0;
       if(N == 0)break;
       for( i = 0; i<32;i++) base2[i] =' ';
       printf("The parity of");
       i = 0;
       while(N > 0)
       {
           if(N==1)
           {
              
              base2[i] = '1';
              count++;
              i++;
              break;
           }
           if(N%2)
           {
              count++;
              base2[i] = '1';
           }
           else
           {
               base2[i] = '0';
           }
           i++;
           N = N /2;
           
       }
       k = i;
       //printf("%d ",k);
       for( i = k; i >= 0;i--)
       {
          printf("%c",base2[i]);  
       }
       printf(" is %d (mod 2).\n",count);
   }
}

/*#include <stdio.h>
#include <math.h>
int main()
{
   int inputI = 0, i = 0, limit = 0, temp = 0,countone=0;
   
   while(scanf("%d", &inputI) != EOF)
   {
       if(inputI < 0 || inputI > 2147483647 || inputI==0)
       {
          break;
       }
       countone=0;
       for(i = 0;;i++)
       {
          temp = inputI - pow(2,i);
          if(temp < 0)
          {
             limit = i;
             break;
          }
       }
       int array[limit];
       for(i = 0 ; i<limit ;i++)
       {
          
          if(inputI%2) countone++;
          array[i] = inputI%2;
          inputI = inputI / 2;
          
       }
       printf("The parity of ");
       for(i = limit-1; i >= 0 ;i--)
       {
          printf("%d", array[i]);
       }
       printf(" is %d (mod 2).\n",countone);
   }
}
*/
