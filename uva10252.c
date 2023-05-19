#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], b[1000];
    int i = 0 , j = 0;
    int min = 0;
    int tableA[26] = {0}, tableB[26]= {0};
    
    while(scanf("%s%s",a,b)!=EOF)
    {
        
        for(i = 0 ;i < 26;i++)
        {
            tableA[i] = 0;
            tableB[i] = 0;
        }
        
        for(i = 0; i<strlen(a);i++)
        {
            tableA[a[i]-'a']++;
        }
        for(i = 0; i<strlen(b);i++)
        {
            tableB[b[i]-'a']++;
        }
        for(i = 0; i < 26 ;i++)
        {
            if(tableA[i]!=0 && tableB[i]!=0)
            {
               if(tableA[i] <= tableB[i])
               {
                  min = tableA[i];
               }
               else
               {
                  min = tableB[i];
               }
               for(j = 0 ; j < min;j++)
               {
                   printf("%c",i+97);
               }
            }
           
        }
        printf("\n");
    }
    
}
