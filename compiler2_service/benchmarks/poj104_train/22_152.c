#define NUM_ITER 1635420

#include <header.h>

int main_bench()
{
	int a[300],n=0,i=0,max,m=0,k=0;
	char b[300];
	for(i=0;;i++)
	{
		my_scanf("%d%c",&a[i],&b[i]);
		n++;
		if(b[i]!=',') break;
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max) max=a[i];
	}
	if(n==1) my_printf("No\n");
	else 
	{
		for(i=1;i<n;i++)
		{
			if(a[i]!=a[0]) 
			{
				k=1;
				break;
			}
		}
	if(k==0)my_printf("No\n");
	else
	{
	for(i=0;i<n;i++)
	{
		if(a[i]>m&&a[i]<max) m=a[i];
	}
	my_printf("%d\n",m);}
	
}}