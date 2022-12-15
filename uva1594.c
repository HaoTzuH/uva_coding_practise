#include <stdio.h>
#include <math.h>
int main()
{
    int inputT= 0, caseint = 0, temp = 0, countzero = 0;
    int i = 0, j = 0;
    bool loopzero = false ;
    scanf("%d", &inputT);
    while(inputT--)
    {
        scanf("%d", &caseint);
        if(caseint < 3 || caseint > 15) break;
        int casrarray[caseint];
        for(i = 0 ; i < caseint ; i++)
        {
          scanf("%d", &casrarray[i]);
        
           
        
        }
       // printf("%d \n", casrarray[0]);
        for(i = 0 ; i < 1000; i++)
        {
            countzero = 0;
            loopzero= false;
            temp = casrarray[0];//printf("%d",temp);
            for(j = 0 ; j < caseint ; j++)
            {
                //temp = casrarray[0];
                if(j == caseint-1)
                {
                   casrarray[j] = abs(casrarray[j] - temp);
                   //printf("%d",casrarray[j]);
                }
                else
                {
                   casrarray[j] = abs(casrarray[j+1] - casrarray[j]);
                   
                }
                if(casrarray[j] == 0) countzero++;
                //printf("%d",countzero);
            }
            if(countzero ==caseint)
            {
               loopzero= true;
               break;
            }
        }
        if(loopzero)
        {
           printf("ZERO\n");
        }
        else printf("LOOP\n");
    }
}
