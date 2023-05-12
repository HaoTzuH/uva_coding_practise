#include<stdio.h>

int main()
{
	int i= 0,j= 0,test_case= 0,n= 0,c = 1;
	scanf("%d\n",&test_case);
	while(test_case--)
	{
		scanf(" N = %d\n",&n);
		int a[n*n];
		for(i=0 ; i<n*n ; i++)
		{
			scanf("%d",&a[i]);
	    }
	    for(i = 0 ; i < n*n; i++)
	    {
	        if(a[i] < 0)
	        {
	           printf("Test #%d: Non-symmetric.\n",c);
	           c++;
	           break;
	        }
	        if(a[i] == a[(n*n)-(i+1)] && i!=(n*n)/2)
	        {
	        }
	        else
	        {
	           if(i==(n*n)/2)
	           {
	              printf("Test #%d: Symmetric.\n",c);
	              c++;
	              break;
	           }
	           else
	           {
	              printf("Test #%d: Non-symmetric.\n",c);
	              c++;
	              break;
	           }
	        }
	    }
	
	}
	return 0;
}
