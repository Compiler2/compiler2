#define NUM_ITER 54496

#include <header.h>

int main_bench()
{
	int k,n,i,j;
	my_scanf("%d%d",&n,&k);
	int*a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	int flag=0;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}
	if(flag==1) my_printf("yes\n");
	if(flag==0) my_printf("no\n");
	return 0;
}