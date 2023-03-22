#define NUM_ITER 40024

#include <header.h>

int main_bench()
{
	int n;
	int a,b;
	int s=0;
	int e=0;
	int i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if(a==b)
		{
			s+=0;
			e+=0;
		}
		else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
		{
			s+=1;
		}
		else
		{
			e+=1;
		}
	}
	if(s==e)
	{
		my_printf("Tie\n");
	}
	else if(s>e)
	{
		my_printf("A\n");
	}
	else
	{
		my_printf("B\n");
	}
	return 0;
}