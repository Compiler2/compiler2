#define NUM_ITER 27495

#include <header.h>

int sushu(int n)
{
	int i;
	int flag=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0) 
		{
			flag=0;
			break;
		}
	}
	return flag;
}

int main_bench()
{
	int m,i;
	my_scanf("%d",&m);
    for(i=3;i<=m/2;i=i+2)
	{
		if(sushu(i)&&sushu(m-i))
		{
			my_printf("%d %d\n",i,m-i);
		}
	}
	return 0;
}