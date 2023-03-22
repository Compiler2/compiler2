#define NUM_ITER 4695

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);

	int i,k=0,a[90],b[20000];

	for(i=0;i<=89;i++)
		a[i]=i+10;

	for(i=0;i<=n-1;i++)
		my_scanf("%d",&b[i]);

	for(i=0;i<=n-1;i++)
	{
		int j;
		for(j=0;j<=89;j++)
		{
			if(b[i]==a[j])
			{
				if(k==0)
					my_printf("%d",a[j]);
				else
					my_printf(" %d",a[j]);
				a[j]=0;
				k++;
				break;
			}
		}
	}

	my_printf("\n");
}