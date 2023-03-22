#define NUM_ITER 37406

#include <header.h>

int main_bench()
{
    int n,i,sum=0,a,b,c,d;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=i;
		b=i%10;
		i=i/10;
		c=i%10;
		i=i/10;
		d=i%10;
		if((a%7!=0)&&(b!=7)&&(c!=7)&&(d!=7))
		{
			sum+=a*a;
		}
		i=a;
	}
	my_printf("%d",sum);
}

