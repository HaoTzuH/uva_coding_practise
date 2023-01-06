
#include <stdio.h>
#include <string.h>


int main()
{
    int inpuset = 0, inM = 0, inC = 0, inY = 0,count=0;
    int i = 0;
    char pixel[100000];
    scanf("%d", &inpuset);
    if(inpuset<0 || inpuset >100000) return 0;
    while(inpuset--)
    {
        
        scanf("%d %d %d %s",&inM, &inY, &inC, pixel);

        for(i = 0 ; i < strlen(pixel); i++)
        {
            //printf("%c ",pixel[i]);
            if(pixel[i]-'M' == 0)
            {
               inM--;
            }
            else if(pixel[i]-'C' == 0)
            {
               inC--;
            }
            else if(pixel[i]-'Y' == 0)
            {
               inY--;
            }
            else if(pixel[i] - 'R' == 0)
            {
               inM--;
               inY--;
            }
            else if(pixel[i] - 'B' == 0)
            {
               inM--;
               inY--;
               inC--;
            }
            else if(pixel[i] - 'G' == 0)
            {
               inY--;
               inC--;
            }
            else if(pixel[i] - 'V' == 0)
            {
               inM--;
               inC--;
            }
            else
            {
            }
            // printf("%d %d %d\n",inM,inC,inY);
            
        }
        if(inM < 0 || inC <0 || inY < 0)
        {
               printf("NO\n");
        }
        else
        {
           printf("YES %d %d %d\n",inM,inY,inC);
        }
    }
    
    
}
