#define NUM_ITER 6069

#include <header.h>

int main_bench()
{
	int a[300],n,b[300],i,j,k=1,t=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		t=1;
		for(j=0;j<i;j++)
			if(a[i]==a[j])
			{
				t=0;
			}
		if(t!=0)
		{
			b[k]=a[i];
			k++;
		}
	}
	my_printf("%d",b[0]);
	for(i=1;i<k;i++)
		my_printf(",%d",b[i]);
	my_printf("\n");
}