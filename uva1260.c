

#include <stdio.h>


int main()
{
    int TestCase = 0;
    int testN = 0,counter = 0;
    int i = 0, j= 0;
    scanf("%d", &TestCase);
   
    while(TestCase--)
    {
        scanf("%d", &testN);
        int listarray[testN], listarrayB[testN-1];
        for(i = 0 ; i < testN; i++)
        {
            listarray[i] = 0;
        }
        for(i = 0 ; i < testN; i++)
        {
            scanf("%d",&listarray[i]);
        }
        
        for(i = 1 ; i < testN; i++)
        {
           counter = 0;
           for(j = 0 ; j < i; j++)
           {
              if(listarray[j] < listarray[i] ||listarray[j] == listarray[i])
              {
                 counter++;
              }
           }
           listarrayB[i-1] = counter;
        }
        counter = 0;
        for(i = 0 ; i < testN-1; i++)
        {
            counter =  listarrayB[i] + counter;
        }
        printf("%d\n", counter);
    }
}
