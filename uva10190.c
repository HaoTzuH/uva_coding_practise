/// A B 不能是0 1
/// A % B 餘數>0一定要放A=A/B前面  ex 93 92 要同時考慮商跟餘數
///

#include<stdio.h>
int modfunction(int a, int b)
{
	if(b <2  || a <2 || a < b)
	{
		return 0;
	}
	while(1)
	{
		if((a % b))
		{
		    return 0;
		}
		a = a / b;
		if(a == 1)
		{
	           return 1;
		}
	}
}
int main()
{
	int input1 = 0, input2= 0;
	
	while(scanf("%d %d",&input1, &input2) != EOF)
	{
		//if(input2 < 2 || (input1 == input2) || input1 < input2 || input1 == 0)
		//{
		//	printf("Boring!\n");
		//	continue;
		//}
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
