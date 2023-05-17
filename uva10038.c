#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0;
    int len_t= 0, temp = 0;
    bool jol = false;
    while(scanf("%d", &len_t) != EOF)
    {
        int arr[3000] = {0}, matt[3000] = {0};
        jol = false;
        for(i = 0; i < len_t;i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i = 1; i < len_t ;i++)
        {
            matt[abs(arr[i] - arr[i-1])]++;
        }
        for(i = 1; i < len_t ;i++)
        {
            if(matt[i] == 0)
            {
               jol = true;
               break;
            }
        }
        if(jol)
        {
           printf("Not jolly\n");
        }
        else
        {
           printf("Jolly\n");
        }
        
    }
    
}
