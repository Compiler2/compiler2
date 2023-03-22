#define NUM_ITER 5683

#include <header.h>

int main_bench()
{
	int n,m,a[1000],i,j,t=0,k;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
			for(k=i+1;k<n;k++)
		{	if(m==a[j]+a[k])
		t++;break;	}

if(t!=0)
my_printf("yes");
else
my_printf("no");

	return 0;
}