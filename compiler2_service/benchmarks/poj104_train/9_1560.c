#define NUM_ITER 14835

#include <header.h>

struct a
{
	char id[100];
	int year;
}p[100];
int main_bench()
{
	int n,i,j,k,t=0,r=0;
	int a[200]={0};
	my_scanf("%d",&n);
	struct a b[100];
	struct a c[100];
	struct a temp;
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%s %d",p[i].id,&p[i].year);
	}
	for(i=0;i<=n-1;i++)
	{
		if(p[i].year>=60)
		{
			b[t]=p[i];
			t++;
		}
	}
	for(i=0;i<=t-1;i++)
	{
		a[b[i].year]++;
	}
	for(i=200;i>=60;i--)
	{
		if(a[i]>0)
		{
			for(j=0;j<=t-1;j++)
			{
				if(b[j].year==i)
				{
					c[r]=b[j];
					r++;
				}
			}
		}
	}


	for(i=0;i<=t-1;i++)
	{
		my_printf("%s\n",c[i].id);
	}
	for(i=0;i<=n-1;i++)
	{
		if(p[i].year<60)
		{
			my_printf("%s\n",p[i].id);
		}
	}
	return 0;
}