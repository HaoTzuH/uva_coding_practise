#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    char ascii[1000];
    int i = 0,count = 0,j= 0,k=0;
    char temp;
    bool flag= false, flag1 = false;
    int coun[128][1];
    
    memset(ascii,0,1000);
    
    
    
    while(scanf("%c",&ascii[i]) != EOF)
    {
        if(flag1){printf("\n"); flag1= false;}
        if(ascii[i]=='\n')
        {
           //if(ascii[i-1] == '\r')
           {
              count = 0;
              count = i;
              i = 0;
              flag=true;
              flag1 = true;
           }
        }
        
        i++;
        
        if(flag)
        {
           
           //printf("%d",(int)ascii[count]);
           for(j = 0 ; j < 128; j++) coun[j][0] = 0;
           for(j = 0 ; j <count;j++)
           {
              for(k = j+1; k < count;k++)
              {
                  if(ascii[i]>ascii[k])
                  {
                     temp = ascii[i];
                     ascii[i]=ascii[k];
                     ascii[k] = temp;
                  }
              }
           }
           for(j = 0 ; j < count;j++)
           {
               coun[ascii[j]-0][0]++;
               
           }
           for(k = 1 ; k < count; k++)
           {
              for(j = 127 ; j >0;j--)
              {
                  if (coun[j][0] == k && j != 10)
                  {
                      printf("%d %d\n",j,k);
                  }
              }
           }
           memset(ascii,0,1000);
           flag = false;
              
        }
    }
}
