#include <stdio.h>

int main()
{
    int n = 0, m = 0 , i = 0, j = 0;
    int case1 = 1;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n < 1 || m > 100)break;
        if(n == 0 && m == 0)break; 
        char nxm[n][m];
        int nxm_out[n][m];
        int mines[n*m];
        for(i = 0 ; i < n*m; i++) mines[i]=0;
        
        //if(getchar() == '\n'){};
        if(case1 > 1) printf("\n");
        for(i =0; i < n ;i++)
        {
           getchar();
           for(j = 0; j < m; j++)
           {
              scanf("%c", &nxm[i][j]);
              if(nxm[i][j] == '*')
              {
                 mines[i*m+j] = 1;
                 
              }
              nxm_out[i][j] = 0;
           }
        }
        
        /* for(i = 0 ; i < n ;i++)
        {
            for(j = 0; j < m;j++)
            {
               printf("%c",nxm[i][j]);
            }
             printf("\n");
            }*/
        
       
        for(i = 0 ; i < n; i++)
        {
           for(j = 0; j < m;j++)
           {
               if(mines[i*m+j] == 1)
               {
                  //printf("*");
                  //printf("%d\n",i*m+j);
                  if(i-1 >= 0 && j-1 >= 0)
                  {
                     nxm_out[i-1][j-1] += 1;
                  }
                  if(i-1 >= 0)
                  {
                     nxm_out[i-1][j] += 1;
                  }
                  if(i-1 >= 0 && j+1 < m)
                  {
                     nxm_out[i-1][j+1] += 1;
                     
                  }
                  if( j-1 >= 0)
                  {
                     nxm_out[i][j-1] += 1;
                  }
                  if( j+1 < m)
                  {
                     nxm_out[i][j+1] += 1;
                  }
                  if(i+1 < n && j-1 >= 0)
                  {
                     nxm_out[i+1][j-1] += 1;
                  }
                  if(i+1 < n )
                  {
                     nxm_out[i+1][j] += 1;
                  }
                  if(i+1 <n && j+1 <m)
                  {
                     nxm_out[i+1][j+1] += 1;
                  }
               }
           }
        }
        printf("Field #%d:\n",case1);
        for(i = 0 ; i < n ;i++)
        {
            for(j = 0; j < m;j++)
            {
                if(mines[i*m+j] == 1)
                {
                   printf("*");
                   continue;
                }
                printf("%d",nxm_out[i][j]);
            }
            printf("\n");
        }
        case1++;
        
    }
}
