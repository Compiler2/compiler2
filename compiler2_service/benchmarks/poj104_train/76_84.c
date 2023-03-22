#define NUM_ITER 1926

#include <header.h>

int main_bench()
{
	int n,i,j,sum,c,d,temp,e,f,g;
	my_scanf("%d",&n);
	temp=0;
	int a[50000],b[50000];
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d",&a[i],&b[i]);
	}
	c=a[0];
	d=b[0];
	a[0]=10001;
	for(i=0;i<n;i++)
	{
		if(a[i]<a[0])
		{
			a[0]=a[i];
			b[0]=b[i];	
		}
	}
	for(i=1;i<n;i++)
	{
		if(a[i]==a[0]&&b[i]==b[0])
		{
			a[i]=c;
			b[i]=d;
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				e=a[j];
				a[j]=a[j+1];
				a[j+1]=e;
				f=b[j];
				b[j]=b[j+1];
				b[j+1]=f;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		sum=0;
		for(j=0;j<i;j++)
		{
			if(a[i]<=b[j])
			{
				sum++;
			}
		}
		if(sum==0)
		{
			temp++;
		}
	}
	g=0;
	for(i=0;i<n;i++)
	{
		if(g<b[i])
		{
			g=b[i];
		}
	}
	if(temp==0)
	{
		my_printf("%d %d",a[0],g);
	}
	else
	{
		my_printf("no");
	}
	return 0;
}