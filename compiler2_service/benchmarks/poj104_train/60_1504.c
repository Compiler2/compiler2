#include <header.h>

int sushu(int i);
int main_bench()
{
	int n,i,j=0;
	my_scanf("%d",&n);
	for(i=4;i<=n;i++)
	{
		if(sushu(i) && sushu(i-2))
		{
			j++;
			my_printf("%d %d\n",i-2,i);
		}

	}
	if(j==0)
		my_printf("empty");


	return 0;
}
int sushu(int i)
{
	int n,sj=0;
	for(n=2;n<i;n++)
	{
		if(i%n==0)
			sj=1;
	}
	if(sj==1) 
	{
		return 0;
	}
	else return 1;
}
