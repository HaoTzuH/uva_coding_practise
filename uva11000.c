//output first N male bees
// second total bees
// 1boy = 1 male + 1 famale
//input N year
//寫遞迴會call暴記憶體

#include<stdio.h>

/*long boybeefuntion(int Nyear)
{
	if(Nyear==0) return 0;
	if(Nyear==1) return 1;
	if(Nyear > 1)
	{
		return boybeefuntion(Nyear-2) + boybeefuntion(Nyear-1) + 1;
	}
	
	
}*/

/*long totalbeefunction(int Nyear)
{
	if(Nyear == 0) return 1;
	if(Nyear == 1) return 2;
	if(Nyear > 1)
	{
		return totalbeefunction(Nyear - 2) +totalbeefunction(Nyear-1)+1;
	}
}*/


/*int main()
{
	int inputN = 0;
	long boybee = 0 , totalbee = 0;
	while(scanf("%d", &inputN) != EOF)
	{
		if(inputN < 0)
		{
			break;
		}
		boybee = boybeefuntion(inputN);
		
		printf("%ld %ld\n",boybee, totalbee);
	}
}*/

int main()
{
	long long giral = 1, boy = 0 , temp = 0;
	int inputN = 0 , i = 0;
	while(scanf("%d", &inputN) != EOF)
	{
		if(inputN < 0) break;
		temp = 0;
		boy = 0;
		giral = 1;
		for(i = 1; i <= inputN; i++)
		{
			temp = boy;
			boy = boy + giral;
			giral = temp + 1;
			//printf("%lld\n", boy);
		}
		printf("%lld %lld\n", boy, giral+boy);
	}
}
