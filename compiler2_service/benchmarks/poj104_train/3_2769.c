#define NUM_ITER 60570

#include <header.h>

int a[70000]={0};
int main_bench()
{
	int n,k,c[1001],i;
	my_scanf("%d%d",&n,&k);
	for (i=1;i<=n;i++) 
	{
		my_scanf("%d",&c[i]);
		a[c[i]+32768]=1;
	}
	for (i=1;i<=n;i++)
	{
		if (a[c[i]+32768]&&a[k-c[i]+32768]) break;
	}
	if (i<n) my_printf("yes");
	 else my_printf("no"); 
} 