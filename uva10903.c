//這是在考輸入輸出
//每組算完勝率要printf("\n")但是最後一組勝率不用
//考慮猜拳輸贏所有的可能

#include <stdio.h>
#include <string.h>

int get_win(char *buff)
{
   if(!strcmp(buff, "rock"))
   {
      return 0;
   }
   else if(!strcmp(buff, "paper"))
   {
      return 1;
   }
   else if(!strcmp(buff, "scissors"))
   {
      return 2;
   }
   return -1;
}

int main()
{

   int nplayer=0, krockscissor = 0,temp = 0;
   double output = 0.0;
   int i = 0,count=0, p1= 0, p2= 0,m1= 0,m2=0;
   //int w_count[101], l_count[101];
   //k*n*(n-1)/2
   //w/(w+1)
   bool space = false;
   while(scanf("%d %d", &nplayer, &krockscissor)!=EOF)
   {
       if(nplayer <=0 || krockscissor<= 0|| krockscissor>100||nplayer>100)
       {
          break;
       }
       if( space ) printf( "\n" );
       space = true;
       
       int plyaer[nplayer*2][2];
       memset(plyaer, 0 , sizeof(plyaer));
       char buf[nplayer+2];
       for(i = 0; i < krockscissor*nplayer*(nplayer-1)/2; i++)
       {
           scanf("%d %s",&p1,buf);
           m1= get_win(buf);
           
           scanf("%d %s",&p2,buf);
           m2= get_win(buf);
           
           if(p1 > p2)
           {
             temp = p1;
             p1 = p2;
             p2 = temp;
             temp = m1;
             m1 = m2;
             m2 = temp;
           }
           
           
           if(m1-m2 == 1)
           {
              plyaer[p1][1]++;
              plyaer[p2][0]++;
           }
           else if(m1-m2 == -2)
           {
              plyaer[p1][1]++;
              plyaer[p2][0]++;
           }
           else if(m1-m2 == -1)
           {
              plyaer[p1][0]++;
              plyaer[p2][1]++;
           }
           else if(m1-m2 == 2)
           {
              plyaer[p1][0]++;
              plyaer[p2][1]++;
           }
           //printf("%d, %d\n",plyaer[2][1],plyaer[2][0]);
       }
       for(i = 1; i <=nplayer ;i++)
       {
           if(plyaer[i][1]+plyaer[i][0] == 0)
           {
              printf("-\n");
           }
           else
           {
              
              printf("%.3lf\n",double(plyaer[i][1])/ double(plyaer[i][1]+plyaer[i][0]));
           }
       }
       
   }
   
   
}
