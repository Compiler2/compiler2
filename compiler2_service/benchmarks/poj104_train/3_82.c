#define NUM_ITER 3055

#include <header.h>

int main_bench()
{
	int n,k,i,a[1000],x,j,z=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		x=k-a[i];
		for(j=0;j<n;j++)
		{
			if(j==i) continue;
			if(a[j]==x) z=1;
		}
	}
	if(z==1) my_printf("yes");
	else my_printf("no");
	return 0;
}