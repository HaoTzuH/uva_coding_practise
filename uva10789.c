#include <stdio.h>
#include <string.h>

int oddfunction(int I)
{
    //printf("%d", I);
    int j = 0 , add = 0;
    if(I == 1) return 0;
    for(j = 1 ; j <= I; j++)
    {
        if(I%j == 0) add++;
        if(add > 2)//除了1跟本身還有可以整除就代表不是質數
        {
           return 0; 
           break;
        }
    }
    return 1;
}

char ascii2[27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char ascii3[27]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main()
{
  int inputT = 0, count = 0, i = 0, case1= 1;
  char ascii[2001];
  bool empty = true;
  int countN[10], countA[27], counta[27];
  scanf("%d%*c", &inputT);
  if(inputT < 0 || inputT > 201) return 0;
  while(inputT--)
  {
      count = 0;
      empty = true;
      while(scanf("%c", &ascii[count]) != EOF)
      {
          if(ascii[count] == '\n') break;
          count++;
      }
     // printf("%d ", count);
      memset(countN,0,sizeof(countN));
      memset(countA,0,sizeof(countA));
      memset(counta,0,sizeof(counta));
      for(i = 0; i < count ; i++)
      {
          if((ascii[i]-'A') < 0)
          {
              countN[ascii[i]-'0']++;
          }
          else if((ascii[i]-'A') >= 0 && (ascii[i]-'A') < 27 )
          {
              countA[ascii[i]-'A']++;
          }
          else
          {
             counta[ascii[i]-'a']++;
          }
          
      }
      printf("Case %d: ", case1);
      for(i = 0; i < 10 ; i++)
      {
          if(countN[i] == 0) continue;
          if(oddfunction(countN[i]))
          {
             empty = false;
             printf("%d",i);
          }
      }

      for(i = 0; i < 27 ; i++)
      {
          if(countA[i] == 0) continue;
          if(oddfunction(countA[i]))
          {
             empty = false;
             printf("%c", ascii2[i]);
          }
      }
     
      for(i = 0; i < 27 ; i++)
      {
          if(counta[i] == 0) continue;
          if(oddfunction(counta[i]))
          {
             empty = false;
             printf("%c", ascii3[i]);
          }
      }
      if(empty)
      {
         printf("empty");
      }
      printf("\n");
      case1++;
      
      
  }
  
}
