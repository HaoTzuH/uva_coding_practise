#include <stdio.h>

int maxfun(int n1, int n2)
{
    if(n1>n2) return n1;
    else if(n1 == n2) return n2;
    else return n2;
}

int main()
{
    int testcase = 0, n_course = 0;
    int i = 0,Max = 0;
    scanf("%d", &testcase);
    while(testcase--)
    {
        Max = 0;
        scanf("%d", &n_course);
        int n_score[n_course];
        for(i=0; i < n_course;i++)
        {
            scanf("%d", &n_score[i]);
        }
        int now = n_score[0];
        Max = now - n_score[i];
        for(i = 1; i < n_course;i++)
        {
           Max = maxfun(Max, now - n_score[i]);
           now = maxfun(now, n_score[i]);
        }
        printf("%d\n", Max);
    }
}
