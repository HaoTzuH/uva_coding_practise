#include<stdio.h>
int modfunction(int a, int b)
{
	while(1)
	{
		a = a / b;
		if(a == 1)
		{	
	        return 1;
		}
		if((a % b) != 0)
		{
			return 0;
			//break;
		}
	}
}
int main()
{
	int input1 = 0, input2= 0;
	
	while(scanf("%d %d",&input1, &input2) != EOF)
	{
		if(input2==0 || input2 == 1 || (input1 == input2) || input1 < input2)
		{
			printf("Boring!\n");
			continue;
		}
		if(modfunction(input1,input2))
		{
			while(1)
			{
			    printf("%d ",input1);
			    input1 = input1 / input2;
			    if(input1 == 1)
			    {
				   printf("%d",input1);
				   break;
			    }
			}
		}
		else{
			printf("Boring!");
			
		}
		
		printf("\n");
	}
	return 0;
}
