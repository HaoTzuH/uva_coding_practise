#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
   char const *aa = (char const *)a;
   char const *bb = (char const *)b;
   
   if(strcmp(aa,bb) >0)
   {
      return 1;
   }
   else if(strcmp(aa,bb) <0)
   {
      return -1;
   }
   else
   {
      return 0;
   }
}

int main()
{
    int testcase =0,species = 0;
    int i = 0,count = 0;
    bool flage = false;
    scanf("%d",&testcase);
    getchar();
    
    char tree[10000][31];
    while(testcase--)
    {
        i=0;
        count = 0;
        //printf("1");
        for(i = 0; i < 10000; i++){
            memset(tree[i], 0, 31);
        }
       
        getchar();
        
        for(i = 0;;)
        {
            scanf("%[^\n]%*c",tree[i]);
            if(tree[i][1]==0) break;
            i++;
        }
        species = i;
        qsort(tree,species,31,cmp);
        
        for(i = 0 ; i <species;)
        {
            if(!flage)
            {
               printf("%s ",tree[i]);
               count++;
               flage = true;
            }
            else
            {
               if(strcmp(tree[i],tree[i+1]) == 0 && i < species && strcmp(tree[i+1], " ") != 0)
               {
                  count++;
               }
               else
               {
                  
                  flage = false;
                  printf("%.4lf\n", ((double)count/(double)species)*100);
                  count = 0;
               }
               i++;
            }
            
        }
        if(testcase) printf("\n");
        
    }
}
