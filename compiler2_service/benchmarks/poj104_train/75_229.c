#define NUM_ITER 16280

#include <header.h>

int main_bench()
{
	int i,j,k,a[10000],b[10000],t=0,p[1000]={0},n,q;
	char c=',';
	for(i=0;c==',';i++)
	{
		my_scanf("%d",&a[i]);
		c=getchar();
	}
	for(j=0;j<i;j++)
	{
		my_scanf("%d",&b[j]);
		c=getchar();
	}
	my_printf("%d ",i);
	n=i;
	k=0;
	for(t=0;t<=999;t++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]<=t&&b[i]>=t+1)
				p[k]=p[k]+1;
			else;
		}
		k=k+1;
	}
	q=p[0];
	for(i=0;i<k;i++)
	{
		if(p[i]>q)
			q=p[i];
		else;
	}
	my_printf("%d",q);
	return 0;
}