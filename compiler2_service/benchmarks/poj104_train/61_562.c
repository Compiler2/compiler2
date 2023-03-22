#define NUM_ITER 59102

#include <header.h>

int main_bench()
{int i,a[20],m,n;
	my_scanf("%d",&n);
	a[0]=1;
	a[1]=1;
	for(i=2;i<20;i++)
		a[i]=a[i-1]+a[i-2];
	i=0;
	while(i<n)
	{	my_scanf("%d",&m);
		if(i==n-1)
			{my_printf("%d",a[m-1]);return 0;}
		else		
			my_printf("%d\n",a[m-1]);
i++;
	}
	return 0;
}