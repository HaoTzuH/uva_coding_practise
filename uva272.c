///這題很有趣


#include <stdio.h>
#include <string.h>

int main()
{
    char inp[10000];
    int i = 0,count = 0;
    while(scanf("%[^\n]%*c",inp)!=EOF)
    {
        //count = 0;
        
        for(i = 0 ; i < strlen(inp); i++)
        {
           if(inp[i] == '"')
           {
              count++;
              if(count%2)
              {
                 printf("``");
              }
              else
              {
                 printf("''");
              }
              //i++;
           }
           else
           {
            
              printf("%c",inp[i]);
           }
           
           
        }
        printf("\n");
    }
}
