#define NUM_ITER 4195

#include <header.h>

int main_bench()
{
	int a[10000],n,i,j,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i>j)
			{
				t=0;
				break;
			}
			else t=1;
		}
		if(t==0)my_printf("\0");
		else 
		{
			if(i>0)my_printf(" %d",a[i]);
			else my_printf("%d",a[i]);
		}
	}			
	return 0;
}