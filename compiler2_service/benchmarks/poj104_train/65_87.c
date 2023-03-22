#define NUM_ITER 39170

#include <header.h>


int main_bench()
{
	int n,i;
	int sa=0,sb=0;
	int a,b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if(a+b==1)
		{
			if(a==0)
			{
				sa++;
			}else if(b==0)
			{
				sb++;
			}
		}else if(a+b==3)
		{
			if(a==1)
			{
				sa++;
			}else if(b==1)
			{
				sb++;
			}
		}else if(a+b==2)
		{
			if(a==2)
			{
				sa++;
			}else if(b==2)
			{
				sb++;
			}
		}
	}

	if(sa>sb)
	{
		my_printf("A\n");
	}else if(sa<sb)
	{
		my_printf("B\n");
	}else if(sa==sb)
	{
		my_printf("Tie\n");
	}
	
	return 0;
}
