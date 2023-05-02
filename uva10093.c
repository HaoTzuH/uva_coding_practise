#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[64];
    int i = 0,now = 0,sum = 0,mx = 0;
    while(scanf("%s",ch)!=EOF)
    {
        sum = 0;
        mx = 1;
        for(i = 0 ; i < strlen(ch);i++)
        {
            now = 0;
            if(ch[i] == '+' || ch[i] == '-')
            {
            }
            else
            {
               //printf("%c",ch[i]);
               if(ch[i] >= '0' && ch[i] <= '9')
               {
                  now = ch[i] - '0';
               }
               if(ch[i] >= 'A' && ch[i] <= 'Z')
               {
                  now = ch[i] - 'A'+10;
               }
               if(ch[i] >= 97 && ch[i] <=122)
               {
                  now = ch[i] - 'a'+36;
               }
               if(mx < now)
               {
                  mx = now;//從當前開始
               }
               sum = sum +now;
            }
            //sum = sum +now;
        }
        for(i = mx; i<63; i++)//從當前開始
        {
            if((sum% i) ==0)
            {
                printf("%d\n",i+1);
                break;
            }
            if(i == 62)
            {
               printf("such number is impossible!\n");
            }
        }
    }
}
