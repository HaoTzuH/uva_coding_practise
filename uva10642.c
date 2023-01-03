/*
超過int範圍未解

#include <stdio.h>


long loc(int x , int y)
{
   return ((x+y)*(x+y+1))/2 +x;//
}

int main()
{

  int	 inputcase = 0;
  int	 startx = 0, starty = 0, denx = 0, deny = 0;
  int	 stepcount= 0;
  int	 i = 1;
  scanf("%d", &inputcase);
  if(inputcase > 500 || inputcase < 0)
  {
     return 0;
  }
  
  while(inputcase--)
  {
      scanf("%d%d%d%d", &startx, &starty, &denx, &deny);
      stepcount=loc(denx,deny)- loc(startx,starty);//2653768670
      //(denx+deny)*(denx+deny+1)
      
      printf("Case %d: %d\n",i,stepcount);
      i++;
  }
}*/
