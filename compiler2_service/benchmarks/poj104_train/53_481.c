#define NUM_ITER 12297

#include <header.h>

main_bench()
{
	int n,m,b,i=1,j,t,s,k;
	int a[300];
	my_scanf("%d\n",&n);
	my_scanf("%d",&b);
	a[0]=b;
	for(k=1;k<n;k++)
	{
		s=1;
		my_scanf("%d",&m);
		a[i]=m;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				t=0;
			else t=1;
			s=s*t;
		}
		if(s!=0)
			i++;
	}
	for(j=0;j<i-1;j++)
	{
		my_printf("%d,",a[j]);
	}
	my_printf("%d",a[i-1]);
}