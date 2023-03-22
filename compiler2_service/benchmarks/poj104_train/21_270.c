#define NUM_ITER 52537

#include <header.h>

int main_bench()
{
	int n,i,j,k,a[300];
	float d=0,m=0,p=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);d=d+a[i];
	}
	d=(float)d;                    
	d=d/n;
	for(i=0;i<n;i++)
	{
		if(a[i]-d>=0)
		{if(a[i]-d>p)
		{p=a[i]-d;j=i;}}
		else
		{if(d-a[i]>m)
		{m=d-a[i];k=i;}
		}
	}
	if(p>m)
		my_printf("%d",a[j]);
	else if(p<m)
		my_printf("%d",a[k]);
		else my_printf("%d,%d",a[k],a[j]);
}