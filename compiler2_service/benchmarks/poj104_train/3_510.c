#define NUM_ITER 53896

#include <header.h>

int main_bench()
{
	int a[1000];
	int n,k,i,j;
	int flag=0;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
    for(i=0;i<n&&flag==0;i++)
	{
		for(j=0;j<n;j++)
			if(a[i]!=a[j]&&a[i]+a[j]==k)
			{
				flag=1;
				break;
			}
	}
	if(flag)
		my_printf("yes");
	else
		my_printf("no");
}