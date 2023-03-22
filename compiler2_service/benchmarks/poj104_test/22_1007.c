#include <header.h>

int main_bench()
{
	int a[300];
	int k,i,j,b;
	for(i=0;i<300;i++)
		a[i]=-1;
	my_scanf("%d",&a[0]);
	for(i=1;i<300;i++)
	{
		my_scanf(",%d",&a[i]);
	}
	for(i=0;i<300;i++)
	{
		for(j=i;j<300;j++)
		{
			if(a[j]>a[i])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	for(i=0;i<300;i++)
	{
		if(a[i]!=a[i+1]&&a[i+1]!=-1)
		{
			my_printf("%d\n",a[i+1]);
			break;
		}
		else if(a[i]==-1)
		{
			my_printf("No");
			break;
		}
	}
	return 0;
}
