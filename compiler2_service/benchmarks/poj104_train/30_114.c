#define NUM_ITER 76754

#include <header.h>

int main_bench()
{
	int n,i,a,b,sum=0;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=i%10;
		b=(i-a)/10;
		if(a==7||b==7);
		else if (i%7==0);
		else
			sum=sum+i*i;
	}
	my_printf("%d",sum);
	return 0;
}

