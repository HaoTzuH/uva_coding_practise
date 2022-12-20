#include <stdio.h>
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
