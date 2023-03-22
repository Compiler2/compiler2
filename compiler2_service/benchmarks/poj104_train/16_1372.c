#define NUM_ITER 1286539

#include <header.h>

int main_bench()
{
	
	int n,s=0,a,i,j=0;
	my_scanf("%d",&n);
	if(n==0)
	{
		my_printf("0");
	}
	else 
	{
		for(i=1;i<=5;i++)
		{
			a=n%10;
			if(a==0)
			{
				j=j+1;
			}
			n=n/10;
			s=s*10+a;
			if(n==0)
			{break;}
		}
		for(i=0;i<j;i++)
		{
			if(j==0)
			{break;}
			my_printf("0");
		}
		my_printf("%d",s);
	}
	return 0;
}