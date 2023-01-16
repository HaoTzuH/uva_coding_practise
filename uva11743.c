//grtchar 可以搞定這題
//一開始想太複雜了用陣列處理反而不是很好

#include <stdio.h>


int main()
{
   int num = 0 ,sum =0;
   char c;
   scanf("%d%*c",&num);
   int i = 0, j = 0;
   /*for(i = 1; i <= num ;i++)
   {
      for(j =1 ; j <=20;j++)
      {
        
      }
   }*/
   while(num--)
   {
       sum = 0;
       for(j = 1; j <=20;j++)
       {
           if(j % 5 ==0)
           {
              c = getchar();
           }
           else if((j%5)%2 == 0)
           {
              c = getchar() -'0';
              sum = sum +c;
           }
           else
           {
              c = getchar()-'0';
              sum = sum +(c*2)/10+(c*2)%10;
           }
           
       }
       if(sum %10 == 0)
       {
          printf("Valid\n");
       }
       else
       {
          printf("Invalid\n");
       }
   }
   
}
