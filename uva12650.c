//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
#include <stdio.h>

int main()
{
    int intN = 0, intR = 0, i = 0,temp = 0;
    int flag = 0, j =0;
    while(scanf("%d %d",&intN,&intR) != EOF)
    {
        int array[intR];
        for(i = 0 ;i < intR; i++)
        {
            scanf("%d", &array[i]);
        }
        for(i = 0 ; i < intR; i++)
        {
            
            for(j = i+1; j< intR;j++)
            {
                if(array[i]> array[j])
                {
                   temp = array[i];
                   array[i]= array[j];
                   array[j] = temp;
                }
            }
            //printf("%d ",array[i]);
            
        }
        flag =0 , j =0;
        for(i = 1 ; i <= intN; i++)
        {
            if(i == array[j])
            {
               if(j > intR) break;
               //printf("%d %d ", i, array[j]);
               j++;
               
            }
            else
            {
               printf("%d ",i);
               flag = 1;
            }
            
            
        }
        if(!flag)
        {
           printf("*");
        }
        printf("\n");
    }
}
