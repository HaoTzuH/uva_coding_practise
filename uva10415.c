#include <stdio.h>
#include <string.h>
bool check_finger[10];

void function(int a, int array[])
{
    int finger[14][10]={{0,1,1,1,0,0,1,1,1,1},//c
                        {0,1,1,1,0,0,1,1,1,0},//d
                        {0,1,1,1,0,0,1,1,0,0},//e
                        {0,1,1,1,0,0,1,0,0,0},//f
                        {0,1,1,1,0,0,0,0,0,0},//g
                        {0,1,1,0,0,0,0,0,0,0},//a
                        {0,1,0,0,0,0,0,0,0,0},//b
                        {0,0,1,0,0,0,0,0,0,0},//C
                        {1,1,1,1,0,0,1,1,1,0},//D
                        {1,1,1,1,0,0,1,1,0,0},
                        {1,1,1,1,0,0,1,0,0,0},
                        {1,1,1,1,0,0,0,0,0,0},//G
                        {1,1,1,0,0,0,0,0,0,0},
                        {1,1,0,0,0,0,0,0,0,0}//B
                        };
                        
     
    int i = 0;             
    for(i = 0; i < 10;i++)
    {
        if(check_finger[i] == false)
        {
           if(finger[a][i] == 1)
           {
              array[i] += finger[a][i];
              check_finger[i] = true;
           }
                     
        }
        else
        {
           if(finger[a][i] ==0)
           {
              check_finger[i] = false;
           }
        }
            
     }
     //return array;
}

int main()
{
    int inptu = 0, i = 0;
    char song[200];
    
   
    int counter_finger[10];
    scanf("%d",&inptu);
    while(inptu--)
    {
        scanf("%s",&song);
        for(i = 0 ; i < 10 ; i++){ 
            check_finger[i] = false;
            counter_finger[i] = 0;
        }
        for(i = 0 ; i < strlen(song); i++)
        {
            if(song[i] == 'c')
            {
               function(0,counter_finger);
               //printf("%d \n",counter_finger[0]);
            }
            if(song[i] == 'd')
            {
              function(1,counter_finger);
            }
            if(song[i] == 'e')
            {
               function(2,counter_finger);
            }
            if(song[i] == 'f')
            {
               function(3,counter_finger);
            }
            if(song[i] == 'g')
            {
               function(4,counter_finger);
            }
            if(song[i] == 'a')
            {
               function(5,counter_finger);
            }
            if(song[i] == 'b')
            {
               function(6,counter_finger);
            }
            if(song[i] == 'C')
            {
               function(7,counter_finger);
            }
            if(song[i] == 'D')
            {
               function(8,counter_finger);
            }
            if(song[i] == 'E')
            {
               function(9,counter_finger);
            }
            if(song[i] == 'F')
            {
               function(10,counter_finger);
            }
            if(song[i] == 'G')
            {
               function(11,counter_finger);
            }
            if(song[i] == 'A')
            {
               function(12,counter_finger);
            }
            if(song[i] == 'B')
            {
               function(13,counter_finger);
            }
        }
        for(i = 0; i <9;i++ )
        {
            printf("%d ",counter_finger[i]);
        }
        printf("%d\n",counter_finger[9]);
    }
}
