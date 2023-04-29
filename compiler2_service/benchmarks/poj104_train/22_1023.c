#define NUM_ITER 1145934

#include <header.h>

int main_bench()
{
	int a[300]={0},i,n=0;
	int max1=0,max2=0;
	char c;
	for(i=0;i<300;i++,n++)
	{
		my_scanf("%d",&a[i]);
		my_scanf("%c",&c);
		if(c!=',') break;
	}
	for(i=0;i<n+1;i++)
	{
		if(a[i]>max1) max1=a[i];
	}
	for(i=0;i<n+1;i++)
	{
		if(max1==a[i]) a[i]=-1;
	}
	for(i=0;i<n+1;i++)
	{
		if(a[i]>max2) max2=a[i];
	}
	if(n==0)
	{
		my_printf("No\n");
	}
	else if(max2==0)
	{
		my_printf("No\n");
	}
	else
	{
		my_printf("%d\n",max2);
	}
	return 0;
}