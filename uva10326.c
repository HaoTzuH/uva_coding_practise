//compiler using 64 bit
// intputN > 32 is over 32 bit so using long long 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int inputN = 0, m =0;
   int i = 0, j =0;
   long long Enumber[60];
   
   while(scanf("%d",&inputN)!=EOF)
   {
       //int Enumber[inputN];
       for(i = 0 ; i < 60 ;i++)
       {
           Enumber[i] = 0;
       }
       Enumber[0] = 1;
       for(i = 1 ; i <= inputN; i++)
       {
           scanf("%d",&m);
           for(j = i ; j >= 0 ;j--)
           {
               Enumber[j+1] = Enumber[j+1] + Enumber[j]*(-m);
                
           }
       }
       
       if(inputN ==1)
       {
          printf("x");
       }
       else
       {
          printf("x^%d",inputN);
       }
       for(i = 1; i < inputN;i++)
       {
           if(Enumber[i] == 0) continue;
              //printf("%d",Enumber[i] );
           if(Enumber[i] < 0)
           {
              if(Enumber[i] != -1)
              {
                 printf(" - %d",Enumber[i]*-1);
              }
              else
              {
                 printf(" - ");
              }
                 
            }
            else
            {
               if(Enumber[i] != 1)
               {
                  printf(" + %d",Enumber[i]);
               }
               else
               {
                  printf(" + ");
               }
            }
              
            if(inputN-i == 1) printf("x");
            else printf("x^%d",inputN-i);
              
        }
        if(Enumber[inputN] < 0) printf(" - %d = 0\n",Enumber[inputN]*-1);
        else printf(" + %d = 0\n",Enumber[inputN]);
   }
}
