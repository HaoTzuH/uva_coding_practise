#include <stdio.h>
#include <string.h>

int main()
{
   char Carray[10000];
   int i = 0, temp = 0,count = 0,countfl=0;
   
   while(scanf("%s",Carray) != EOF)
   {
         count = 0;
         countfl =0;
         for(i = 0; i < strlen(Carray);i++)
         {
             if((Carray[i]-'A') > -1 && (Carray[i] - 'A') < 26)
             {
                temp = (Carray[i]-'A');
                if(temp <= 2)//A
                {
                   printf("2");
                   count++;
                }
                else if(temp > 2 && temp <= 5)//D
                {
                   printf("3");
                   count++;
                }
                else if(temp > 5 && temp <=8 )//G
                {
                   printf("4");
                   count++;
                }
                else if(temp > 8 && temp <=11)//J
                {
                    printf("5");
                    count++;
                }
                else if(temp > 11 && temp <= 14)//M
                {
                   printf("6");
                   count++;
                }
                else if(temp > 14 && temp <= 18)//P
                {
                   printf("7");
                   count++;
                }
                else if(temp > 18 && temp <= 21)//T
                {
                   printf("8");
                   count++;
                }
                else
                {
                   printf("9");
                   count++;
                }
                
             }
             else{
                printf("%c",Carray[i]);
                if((Carray[i] - '-') == 0)countfl++;
             }  
         }
         printf(" %d %d\n",count, countfl);
   }
}
