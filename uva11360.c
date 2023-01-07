

// row a b interchanged
// col a b interchanged
// transpose matrix

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int testcase = 0, matrixsize = 0, inputOP = 0;
    int i = 0,j= 0, a= 0, b = 0,temp = 0, temp1= 0;
    char OPs[50];
    scanf("%d", &testcase);
    temp1 = 1;
    while(testcase--)
    {
        scanf("%d", &matrixsize);
       
        int matrix[matrixsize][matrixsize], temp_matrix[matrixsize];
        for(i = 0 ; i < matrixsize; i++)
        {
           
            scanf("%d",&temp_matrix[i]);
        }
       //printf("%d\n",temp_matrix[0]);
        for(i = 0 ; i < matrixsize; i++)
        {
             for(j = matrixsize-1 ; j>=0; j--)
             {
                  matrix[i][j]= temp_matrix[i]%10;
                  temp_matrix[i] = temp_matrix[i]/10;
                  //printf("%d %d %d \n",i,j,matrix[i][j]);
             }
               
        }
        //printf("%d\n",matrix[0][0]);
        scanf("%d",&inputOP);
        
        while(inputOP--)
        {
            memset(OPs,32,20);
            i= 0;
            scanf("%s",OPs);
            
            //printf("%c\n", OPs[0]);
            if(OPs[0] == 't'&& OPs[1] == 'r'&& OPs[2] == 'a')
            {
                for(i = 0 ; i < matrixsize; i++)
                {
                   for(j = i+1 ; j< matrixsize; j++)
                   {
                       temp = matrix[i][j];
                       matrix[i][j] = matrix[j][i];
                       matrix[j][i] = temp;
                   }
                }
            }
            if(OPs[0] == 'r' && OPs[1] == 'o' && OPs[2] == 'w')
            {
               scanf("%d %d", &a, &b);
               
               a = a-1;
               b = b-1;   
               for(j = 0; j < matrixsize; j++)
               {
                   temp_matrix[j]= matrix[a][j];
                   matrix[a][j] = matrix[b][j];
                   matrix[b][j] = temp_matrix[j];
               }  
            }
            
            if(OPs[0] == 'c' && OPs[1] == 'o' && OPs[2] == 'l')
            {
               scanf("%d %d", &a, &b);
               a=a-1;
               b=b-1;
               for(j = 0; j < matrixsize; j++)
               {
                   temp_matrix[j]= matrix[j][a];
                   matrix[j][a] = matrix[j][b];
                   matrix[j][b] = temp_matrix[j];
               }
            }
            if(OPs[0] == 'i' && OPs[1] == 'n' && OPs[2] == 'c')
            {
                 for(i = 0 ; i < matrixsize; i++)
                 {
                    for(j = 0 ; j< matrixsize; j++)
                    {
                        matrix[i][j]++;
                        if(matrix[i][j]== 10)
                        {
                           matrix[i][j] = 0;
                        }
                    }
                 }
            }
            if(OPs[0] == 'd' && OPs[1] == 'e' && OPs[2] == 'c')
            {
                 for(i = 0 ; i < matrixsize; i++)
                 {
                    for(j = 0 ; j< matrixsize; j++)
                    {
                        matrix[i][j] = matrix[i][j]-1;
                        if(matrix[i][j] < 0)
                        {
                           matrix[i][j] = 9;
                        }
                    }
                 }
            }
           
            
        }
        printf("Case #%d\n",temp1);
        for(i = 0 ; i < matrixsize; i++)
        {
            for(j = 0 ; j< matrixsize; j++)
            {
                printf("%d",matrix[i][j]);
            }
            printf("\n");
         }
         temp1++;
         printf("\n");
    }
    
}
