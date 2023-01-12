

#include <stdio.h>
#include <string.h>


//%*c 吃enter
//%[^\n] 連空白都吃
//直接%s 遇到空白就換下個陣列存

int main()
{
    int inputN = 0, i =0, j =0,Q = 0;
    scanf("%d%*c", &inputN);
    if(inputN <0 ||inputN>20) return 0;
    char fir[inputN][200],sec[inputN][200];
    for(i = 0; i < inputN; i++)
    {
      for(j = 0 ; j < 200 ;j++)
      {
          fir[i][j] =' ';
          sec[i][j] =' ';
      }
    }
    for(i = 0; i < inputN; i++)
    {
        scanf("%[^\n]%*c", fir[i]);
        //j = 0;
        
        scanf("%[^\n]%*c", sec[i]);
        //j = 0;
        
    }
    //printf("%s\n",fir[0]);
    scanf("%d%*c",&Q);
    char fir1[Q][200];
    for(i = 0; i < Q;i++)
    {
        scanf("%[^\n]%*c",fir1[i]);
    }
   // printf("%d",strcmp(fir1[0],fir[2]));
  
    for(i = 0;i < Q;i++)
    {
        //printf("%s\n",fir1[i]);
        for(j = 0 ; j < inputN; j++)
        {
           //printf("%s\n",fir[j]);
           if(strcmp(fir[j],fir1[i]) == 0)
           {
              printf("%s\n" ,sec[j]);
           }
           
        }
        
    }
    
    
    
}
