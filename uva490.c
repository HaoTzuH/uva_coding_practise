#include <stdio.h>
#include <string.h>

int main()
{
    char in[100][100];
    int i = 0, j = 0, k = 0;
    int max = 0;
    while(scanf("%[^\n]%*c", in[i]) != EOF)
    {
        if(strlen(in[i]) > max )
        {
           max=strlen(in[i]);
        }
        i++;
        
    }
    //prinbt
    for(k = 0 ; k < max;k++)
    {
        for(j = i-1 ; j>=0;j--)
        {
            if(in[j][k])
            {
               printf("%c",in[j][k]);
            }
            else
            {
               if( j != 0)//in[j][k]是null 但j不是0要補空格
               {
                  printf(" ");
               }
               
            }
        }
        printf("\n");
    }
    
}
