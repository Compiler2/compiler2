#define NUM_ITER 53185

#include <header.h>

int main_bench()
{
	int n,k;
	int a[1001];
	int i,j;
	int flag=0;

	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n&&flag==0;i++)
		for(j=0;j<n&&flag==0;j++)
		{
			if(j>i&&a[i]+a[j]==k)
			{
				my_printf("yes\n");
				flag=1;
			}
		}
	if(flag==0)
		my_printf("no");
}