#define NUM_ITER 55900

#include <header.h>

int main_bench()
{
	int num[300]={0},n,i,a[300]={0};
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&num[i]);
	my_printf("%d",num[0]);
	a[num[0]]=1;
	for (i=1;i<n;i++)
		if (a[num[i]]==0)
		{
			my_printf(",%d",num[i]);
			a[num[i]]=1;
		}
	my_printf("\n");
}