#define NUM_ITER 32

#include <header.h>

void m(int,int);
main_bench()
{
	int a,b,c,i;
	my_scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		my_scanf("%d%d",&b,&c);
		m(b,c);
	}
}
void m(int q,int w)
{
	int a,i,j;
	long sum;
	sum=0;
	for(i=1;i<=q;i++)
	{
		for(j=1;j<=w;j++)
		{
			my_scanf("%d",&a);
			if(i==1||j==1||i==q||j==w)
			{
				sum+=a;
			}
		}
	}
	my_printf("%ld\n",sum);
}
