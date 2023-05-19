#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char a[10000];
    int i = 0,j = 0;
    char table[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while(scanf("%[^\n]%*c", a)!=EOF)
    {
        //printf("%s\n",a);
        
        for(i = 0 ; i < strlen(a); i++)
        {
            a[i] = tolower(a[i]);
        }
        for(i = 0 ; i < strlen(a);i++)
        {
            if(a[i] == ' ')
            {
               printf(" ");
            }
            for(j = 0 ; j < strlen(table); j++)
            {
                if(table[j] == a[i])
                {
                   printf("%c",table[j-2]);
                }
            }
        }
        printf("\n");
    }
}
