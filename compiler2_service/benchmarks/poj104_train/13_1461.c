#define NUM_ITER 10691

#include <header.h>

int main_bench()
{
	int i,j,n,flag;
	int a[100000];
	my_scanf("%d\n",&n);
	my_scanf("%d",&a[0]);
	for(i=1;i<n;i++)
	{
		my_scanf(" %d",&a[i]);
	}
	my_printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
				flag=1;
		}
		if(flag==0)
		my_printf(" %d",a[i]);
	}
	return 0;
}
