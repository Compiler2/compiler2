#define NUM_ITER 6161

#include <header.h>

int main_bench()
{
	int n,i,j,k;
	int a[20000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%d",&a[i]);
	my_printf("\n");
	}
	my_printf("%d",a[0]);
	for(i=1;i<n;i++)
	{for(j=0,k=0;j<i;j++)
	{if (a[i]==a[j])
	k++;
	}
	if(k==0)
	my_printf(" %d",a[i]);
	}
	my_printf("\n");
	return 0;
}