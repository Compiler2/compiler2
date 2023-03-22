#include <header.h>

int main_bench()
{
	int n,i,j,t,a[20000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=0;
		if(i==0) my_printf("%d",a[0]);
		else
		{
			for(j=0;j<i;j++)
			{
				if(a[i]==a[j]) t=t+1;
			}
			if(t==0) my_printf(" %d",a[i]);
		}
	}
	return 0;
}