#include <stdio.h>

int main()
{
    int sourcex, sourcey ,desx ,desy;
    int i = 0,testcase = 0, j = 0;
    long long int step;
    int sourt = 0, destotal = 0;
    scanf("%d", &testcase);
    while(testcase--)
    {
        scanf("%d %d %d %d",&sourcex,&sourcey,&desx,&desy);
        step = 0;
        sourt = sourcex+sourcey;
        destotal = desx+desy;
        for(i = sourt+1 ; i <= destotal ;i++)
        {
            step = i +step;
        }
        step = step - sourcex + desx;
        j++;
        printf("Case %d: %d\n",j,step);
    }
}
