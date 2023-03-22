#define NUM_ITER 5555

#include <header.h>

int main_bench()
{
    int i,j,n,k,f;
	int a[1000];

	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	f=1;

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i!=j)
			    if(a[i]+a[j]==k)
				{
				    f=0;
					break;
				}

	if(f)
		my_printf("no");
	else
		my_printf("yes");

	return 0;
}