#define NUM_ITER 27428

#include <header.h>

int ju(int x)
{
	int j;
	for(j=2;j<x;j++)
	{
		if(x%j==0)
			return 0;
	}
	return 1;
}
int main_bench()
{
	int i,num,flag=0;
	int b;
	my_scanf("%d",&num);
	for(i=3;i<=num/2;i=i+2)
	{
		if(ju(i)==1)
		{
		b=num-i;
		if(ju(b)==1)
		{
			my_printf("%d %d",i,b);
			my_printf("\n");

		}
	}

	}		
	return 0;
}
