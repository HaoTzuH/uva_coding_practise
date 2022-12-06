//一張地圖
//第一個輸入是幾張地圖 <100
//第二個以後是那組地圖的模樣，B障礙物不能過且不動，W是要移動的
//(x+1,y+1)  (x-1,y+1)
//(x+2,y+2)  (x-2,y+2)

#include<stdio.h>
int main()
{
    int testnumber=0, maplen=0, px=0, py=0, Case = 1;
    int i = 0, j = 0, start[101][101];
    char mapp[101][101];
    scanf("%d", &testnumber);
    while(testnumber--)
    {
        //---------input
        scanf("%d", &maplen);
        for(i = 0; i < maplen; i++)
        {
            for(j = 0; j < maplen; j++)
            {
                 scanf("%s", &mapp[i][j]);
                 //if(mapp[i][j] == 'W')
                 //{
                       //px = i;
                       //py = j;
                // }
            }
        }
        //--------
        //start[px][py]=1;
        for(i = testnumber-1; i >= 0; i--)
        {
            for(j = 0; j < testnumber; j++)
            {
                if(mapp[i][j] == 'W')
                {
                    start[i][j] = 1;
                    continue;
                }
                if(mapp[i][j] == 'B')
                {
                    continue;
                }
                if(i+1 < testnumber && j+1 <testnumber && mapp[i][j] !='B')
                {
                   start[i][j]+=start[i+1][j+1];
                }
                if(i+1 < testnumber && j-1 >0 && mapp[i][j] !='B')
                {
                   start[i][j]+=start[i+1][j-1];
                }
                if(i+1 < testnumber && j+1 <testnumber && mapp[i][j] =='B')
                {
                   if(i+2 < testnumber && j+2 <testnumber && mapp[i+2][j+2] !='B')
                   {
                      start[i][j]+=start[i+2][j+2];
                   }
                }
                if(i+1 < testnumber && j-1 >=0 && mapp[i+1][j-1] =='B')
                {
                   if(i+2 < testnumber && j-2 >=0 && mapp[i+2][j-2] !='B')
                   {
                      start[i][j]+=start[i+2][j-2];
                   }
                }
                start[i][j] %= 1000007;
            }
        }
         int ans = 0;
        for(i = 0; i < n; i++)
            if(mapp[0][i] != 'B')
                ans += start[0][i], ans %= 1000007;
        printf("Case %d: %d\n", ++cases, ans);
    }
    return 0;
}
