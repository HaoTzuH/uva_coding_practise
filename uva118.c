#include <stdio.h>
#include <string.h>


typedef struct{
	int x;
	int y;
	int dir;
	char orient;
}Position;


int main()
{
    Position robot;
    char orient[4] = {'N', 'E', 'S', 'W'};
    int nextX = 0, nextY =0, i =0, j =0;
    int upper_x = 0, upper_y = 0;
    bool isLost = 0;
    char longe[100];
    int moving[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    
    scanf("%d %d",&upper_x, &upper_y);
    
    int map[upper_x+1][upper_y+1];
    for(i = 0 ; i < upper_x+1; i++)
    {
        for( j = 0 ; j<upper_y+1;j++)
        {
            map[i][j]= 0;
        }
    }
    
   
    while(scanf("%d %d %c",&robot.x, &robot.y, &robot.orient) != EOF)
    {
        
        isLost = 0;
        for( i = 0; i < 4; ++i)
        {
             if(robot.orient == orient[i])
             {
                robot.dir = i;
                break;
             }
        }
        scanf("%s",&longe);
	    //printf("%d", strlen(longe));
        for(i = 0 ; i<strlen(longe) ;i++)
        {
             //enter orientation L R
             //printf("%c ",longe[i]);
           
             if(longe[i] == 'L')
             {
		        // Rotate the direction 
                robot.dir = (robot.dir + 3) % 4;
                robot.orient = orient[robot.dir];
             }
             if(longe[i] == 'R')
             {
	            robot.dir = (robot.dir + 1 ) % 4;
                robot.orient = orient[robot.dir];
             }
             if (longe[i] == 'F')
             {
                 nextX = robot.x + moving[robot.dir][0];
                 nextY = robot.y + moving[robot.dir][1];
                // printf("%d %d ",nextX,nextY);
                 if(nextX < 0 || nextX > upper_x || nextY > upper_y || nextY < 0)
                 {
                    if(map[robot.x][robot.y] < 0)
                    {
                       continue;
                    }
                    isLost = 1;
		   // Let the position before robot out of bound become blocked
                   map[robot.x][robot.y] = -1;
                   break;
                 }
                 robot.x = nextX;
                 robot.y = nextY;
				
	         }
			
        }
        if(isLost)
	      {
           printf("%d %d %c LOST",robot.x, robot.y, robot.orient);
        }
	      else
	      {
           printf("%d %d %c",robot.x, robot.y, robot.orient);
        }
        printf("\n");
       
    }
    
}
