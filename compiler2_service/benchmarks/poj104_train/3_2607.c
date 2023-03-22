#define NUM_ITER 54423

#include <header.h>

int main_bench()
{
	int a[1000];
	int n,i,j,k;
	int t;
	int d;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=k-a[i];
		for(j=i;j<n;j++)
		{
			if(a[j]==t){my_printf("yes\n");return 0;}
		}

	}
	my_printf("no");
	return 0;

	
}