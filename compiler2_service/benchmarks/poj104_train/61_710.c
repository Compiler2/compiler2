#define NUM_ITER 7445

#include <header.h>


int main_bench()
{
	int a[100];
	int m,n;
	a[0]=1;
	a[1]=1;
	my_scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		my_scanf("%d",&n);
		for(int q=2;q<n;q++)
		{
				a[q]=a[q-1]+a[q-2];
			
		}
		my_printf("%d\n",a[n-1]);
	}
  	return 0;
}
