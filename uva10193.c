#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  long long int 才夠存
*/

int GCD(long long int n1,long long int n2)
{
    while(n1!=n2)
    {
        if(n1 > n2)
        {
           n1 = n1 -n2;
        }
        if(n2>n1)
        {
           n2 = n2 -n1;
        }
        if(n1 == n2)
        {
           return n1;
           break;
        }
    }
}

int main()
{
    int testcase = 0;
    long long int i = 0, count1 = 0, count2 = 0;
    int line = 1;
    scanf("%d",&testcase);
    char str1[30],str2[30];
    while(testcase--)
    {
        scanf("%s",str1);
        scanf("%s",str2);
        count1 = 0; 
        count2 = 0;
        printf("Pair #%d: ",line);
        line++;
        for(i = 0 ;i< strlen(str1);i++)
        {
            count1 = (count1<<1)+ str1[i]-'0';
        }
        //printf("%d ",count1);
        for(i = 0 ;i< strlen(str2);i++)
        {
            count2 = (count2<<1)+ str2[i]-'0';
        }
        //printf("%d c2 %d\n",count1,count2);
        if(GCD(count1,count2) != 1)
        {
           printf("All you need is love!\n");
        }
        else
        {
           printf("Love is not all you need!\n");
        }
    }
}
