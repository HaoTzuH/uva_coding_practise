#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int testcase = 0,i;
    scanf("%d",&testcase);
    char sleep[testcase][50];
    while(testcase--)
    {
        scanf("%s",sleep[i++]);
    }
    for(i=0;i<20;i++)
    {
        printf("%s\n",sleep[i]);
    }
}

/*
input

Sleep Dom
Sleep Sakin
Test
Sleep Asif
Sleep Mushfiq
Test
Kick
Test
Sleep Shafi
Test
Kick
Test
Kick

output
Sleep↵\r\n  //0
Dom↵\r\n    //1
Sleep↵\r\n
Sakin↵\r\n
Test↵\r\n
Sleep↵\r\n
Asif↵\r\n
Sleep↵\r\n
Mushfiq↵\r\n
Test↵\r\n
Kick↵\r\n


*/
