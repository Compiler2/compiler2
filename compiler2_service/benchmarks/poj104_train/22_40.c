#define NUM_ITER 1844273

#include <header.h>

int main_bench()
{
	int a[300],n,i,s=0,t,j;
	char b;
	for(i=0;;i++)
	{
		my_scanf("%d",&a[i]);
		b=getchar();
		if(b!=',')
			break;
	}
	n=i;
	for(i=1;i<=n;i++)
	{
		if(a[i]!=a[0])
		{s=1;
		break;}
	}
	if(s==0)
		my_printf("No");
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=n;j>i;j--)
			{
				if(a[j]>a[j-1])
				{
					t=a[j];
					a[j]=a[j-1];
					a[j-1]=t;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]!=a[0])
			{	my_printf("%d",a[i]);
			break;
			}
		}

	}
}

		