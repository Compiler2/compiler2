#define NUM_ITER 13472

#include <header.h>

int main_bench()
{
	int n,i,j,t;
	t=0;
	int a[300];
	int b[300];
	my_scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
		my_scanf("%d ",&a[i]);
	my_scanf("%d",&a[n-1]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			if(a[i]==a[j])
			{a[i]=-1;
			break;}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			b[t]=a[i];
			t=t+1;
		}
	}
	for(i=0;i<t-1;i++)
		my_printf("%d,",b[i]);
	my_printf("%d",b[t-1]);
}