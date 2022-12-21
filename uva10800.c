//這題很難，我還在體會

#include <stdio.h>
#include <string.h>


int main()
{
   int inputN= 0,testcase = 1, len= 0, k = 0, RCFcount= 0;
   int iX= 0, iY = 0, i= 0, j =0;
   char inarray[50];
   int y = 100, mx = 100, mn = 100;
   //char mark = '\';
   scanf("%d%*c", &inputN);
   // R/ F\ C_
  
   while(inputN--)
   {
       printf("Case #%d:\n", testcase);
       RCFcount = 0;
       y = 100, mx = 100, mn = 100;
       //countF=0;
       memset(inarray, ' ', sizeof(inarray));
	   char output[205][205]={};
       
       while(scanf("%c", &inarray[RCFcount])!=EOF)
       {
           if(inarray[RCFcount] == '\n') break;
           RCFcount++;
       }
	   if(RCFcount < 1) break;
       for(i = 0;i < RCFcount;i++ )
	   {
		    if(inarray[i] == 'R')
			{
				if(i && inarray[i-1] == 'R')
				{
					y++;
				}
				output[y][i] = '/';
				if(inarray[i+1] == 'C')
				{
					y++;
				}
			}
			else if(inarray[i] =='F')
			{
				if(i && inarray[i-1] != 'R')
				{
					y--;
				}
				output[y][i] = '\\';
			}
			else
			{
				output[y][i] = '_';
			}
			if(y > mx)  mx = y;
            if(y < mn)  mn = y;
			
	   }
	   //printf("%d %d", mx,mn);
       
	   for(i = mx ; i >= mn ; i--)
	   {
		   putchar('|'), j = 50;
           putchar(' ');
           while(!output[i][j]) j--;
           for(k = 0; k <= j; k++)
                printf("%c", !output[i][k] ? ' ' : output[i][k]);
           puts("");
	   }
	   
	   
      putchar('+');
        for(i = -1; i <= RCFcount; i++)
            putchar('-');
      puts("\n");
      testcase++;
   }
}
