#define NUM_ITER 81177

#include <header.h>

int main_bench()
{
	int n,i,s;
	s = 0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			s = s;
		}
		else if(i%10==7)
		{
			s = s;
		}
		else if(i/10==7)
		{
			s = s;
		}
		else
		{
			s+=i*i;
		}
	}
	my_printf("%d",s);
	return 0;
}
