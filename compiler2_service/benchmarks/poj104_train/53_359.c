#include <header.h>

int main_bench()
{
	int i,k=0,n,s,f;
	int a[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(k==0)
		{
			my_printf("%d",a[0]);
			k=1;
		}
		for(s=0;s<i;s++)
		{
			if(a[i]==a[s])
			{
				f=0;
				break;
			}
			else 
			{
				f=1;
			}

		}
		if(f==1)my_printf(",%d",a[i]);
	}
	my_printf("\n");
}