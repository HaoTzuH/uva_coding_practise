
#include <stdio.h>

int main()
{
   int testcase = 0,case1 = 1;
   int day1 = 0, day2 = 0, month1 = 0,month2 = 0, year1 = 0, year2 = 0;
   bool invalid = false;
   bool check = false;
   scanf("%d", &testcase);
   while(testcase--)
   {
       //case1 = 1;
       invalid=false, check = false;
       scanf("%d/%d/%d",&day1,&month1,&year1);
       scanf("%d/%d/%d",&day2,&month2,&year2);
       if(year1-year2 >=0)
       {
          if(day1 - day2 < 0) month1 = month1 - 1;
          if(month1 - month2 < 0)
          {
             year1--;
          }
          if(year1-year2 < 0)
          {
             invalid = true;
          }
          if(year1 - year2 > 130)
          {
             check = true;
          }
       }
       else
       {
           invalid = true;
       }
       
       if(invalid) printf("Case #%d: Invalid birth date\n",case1++);
       if(check) printf("Case #%d: Check birth date\n",case1++);
       if(!check && !invalid) printf("Case #%d: %d\n",case1++,year1-year2);
   }
}
