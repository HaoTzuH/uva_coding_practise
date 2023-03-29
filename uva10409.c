
#include <stdio.h>
#include <string.h>

typedef struct{
   int up= 1;
   int down = 6;
   int back = 2;
   int left = 3;
   int fower = 5;
   int right= 4;
   
}easy_game;

int main()
{
    int len = 0,temp = 0, i = 0;
    char roate[100];
    easy_game Game;
    while(scanf("%d",&len)!=EOF)
    {
        if(len <= 0 || len >1024) break;
        for(i = 0;i < len ;i++)
        {
            scanf("%s",roate);
            if(strcmp(roate,"east") == 0)
            {
               temp = Game.up;
               Game.up = Game.left;
               Game.left = Game.down;
               Game.down = Game.right;
               Game.right = temp;
            }
            if(strcmp(roate,"north") == 0)
            {
               temp = Game.up;
               Game.up = Game.fower;
               Game.fower = Game.down;
               Game.down = Game.back;
               Game.back = temp;
            }
            if(strcmp(roate,"west") == 0)
            {
               temp = Game.up;
               Game.up = Game.right;
               Game.right = Game.down;
               Game.down = Game.left;
               Game.left = temp;
               //printf("%d ",Game.up);
            }
            if(strcmp(roate,"south") == 0)
            {
               
               temp = Game.up;
               Game.up = Game.back;
               Game.back = Game.down;
               Game.down = Game.fower;
               Game.fower = temp;
            }
            
        }
        printf("%d\n",Game.up);
        Game.up = 1, Game.down = 6, Game.left=3, Game.right=4;
        Game.fower = 5,Game.back=2;
       
    }
}
