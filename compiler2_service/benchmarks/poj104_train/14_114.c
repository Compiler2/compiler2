#include <header.h>


struct data
{
	int num[100000],a[100000],b[100000],sum[100000];
}data;

int main_bench()
{
	int i,n,x=0,y=0,z=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&data.num[i],&data.a[i],&data.b[i]);
		data.sum[i]=data.a[i]+data.b[i];
	}
	for(i=0;i<n;i++)
	{
		if(data.sum[i]>data.sum[x])
		{
			z=y;
			y=x;
			x=i;
			continue;
		}
		if(data.sum[i]<=data.sum[x]&&data.sum[i]>data.sum[y])
		{
			z=y;
			y=i;
			continue;
		}
		if(data.sum[i]<=data.sum[y]&&data.sum[i]>data.sum[z])
			z=i;
	}
	my_printf("%d %d\n",data.num[x],data.sum[x]);
	my_printf("%d %d\n",data.num[y],data.sum[y]);
	my_printf("%d %d",data.num[z],data.sum[z]);
}