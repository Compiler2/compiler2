#define NUM_ITER 17929

#include <header.h>

int main_bench()
{
	int i,a[300]={0},m,n;
	my_scanf("%d",&a[0]);
	for(i=1;i<300;i++)
		my_scanf(",%d",&a[i]);
	if(a[1]<a[0])
	{
		m=a[0];
		n=a[1];
	}
	else if(a[1]>a[0])
		{
		n=a[0];
		m=a[1];
	}
	else
	{m=a[1];
	n=0;}
	for(i=2;i<300;i++)
	{if(a[i]>m)
	{n=m;
	m=a[i];}
	else if(a[i]>n&&a[i]!=m)
		n=a[i];
	}
	if(n==0)
		my_printf("No");
	else if(m==n)
		my_printf("No");
	else
		my_printf("%d",n);
	

	return(0);
}