#define NUM_ITER 2443

#include <header.h>

int main_bench()
{
	int bubble(int c[],int x);
	int i,m,n;
	int a[100],b[100];
	my_scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		my_scanf("%d ",&a[i-1]);
	}
	my_printf("\n");
	for(i=1;i<=n;i++)
	{
		my_scanf("%d ",&b[i-1]);
	}
	my_printf("\n");
	bubble(a,m);
	my_printf(" ");
	bubble(b,n);
}

int bubble(int c[],int x)
{
	int t,j,temp;
	for(t=1;t<=x;t++)
	{
		for(j=1;j<=x-t;j++)
		{
			if(c[j-1]>c[j])
			{
				temp=c[j-1];
				c[j-1]=c[j];
				c[j]=temp;
			}
		}
	}
	for(t=1;t<=x;t++)
	{
		my_printf("%d",c[t-1]);
		if(t!=x)
		my_printf(" ");
	}
}
