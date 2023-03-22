#define NUM_ITER 81067

#include <header.h>

int main_bench()
{
	int f,i,num,sum=0;
	my_scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%7==0)
		{
			f=0;
		}
		else if(i%10==7)
		{
			f=0;
		}
		else if(i/10==7)
		{
			f=0;
		}
		else
		{
			f=i;
		}
		sum+=f*f;
	}
	my_printf("%d\n",sum);
	return 0;
}