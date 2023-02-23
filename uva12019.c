
#include <stdio.h>
#include <stdlib.h>

int main(){
    int testcase = 0, i = 0,countday = 0;
    scanf("%d", &testcase);
    int monarr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    //string days[] ={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    int day = 0 ,month = 0;
    while(testcase--)
    {
        scanf("%d %d",&month,&day);
        countday = 0;
        for(i = 0;i<13;i++)
        {
            countday +=  monarr[i];
            if(i == month-1) break;
        }
        countday = countday +day;
        //printf("%d ", countday);
        if(countday % 7 == 0) printf("Friday");
        else if(countday % 7 == 1) printf("Saturday");
        else if(countday % 7 == 2) printf("Sunday");
        else if(countday % 7 == 3) printf("Monday");
        else if(countday % 7 == 4) printf("Tuesday");
        else if(countday % 7 == 5) printf("Wednesday");
        else if(countday % 7 == 6) printf("Thursday");
        printf("\n");
    }
}
