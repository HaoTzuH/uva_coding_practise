#include <stdio.h>

//罷工
//5,6休息，日算第一天
//第一個輸入是測幾組
//第二個是幾天為一次週期
//第三個是那一組有幾筆測資

int main()
{
    int testcase = 0,w = 0, k= 0;
    int daysN = 0,countday = 0;
    int partyP= 0, i = 0;//1~100
    int hartal = 0;
    
    scanf("%d", &testcase);
    while(testcase--)
    {
        scanf("%d", &daysN);
        scanf("%d", &partyP);
        int arrpaty[partyP];
        for(i = 0; i < partyP;i++)
        {
            scanf("%d",&arrpaty[i]);//5,6 offday. first is sunday
        }
        // %7 know what day
        countday = 0;
        for(i = 1 ; i <= daysN;i++)
        {
            w = i%7;
            if(w>=1 &&w<=5)
            {
               hartal = 0;
               for(k = 0;k < partyP;k++)
               {
                   hartal = hartal || (i%arrpaty[k]==0);//那天有罷工
               }
               countday = countday +hartal;
            }
        }
        printf("%d\n",countday);
        
        
    }
    
    
}
