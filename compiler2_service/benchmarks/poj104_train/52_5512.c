#define NUM_ITER 4127

#include <header.h>

void yidong(int a1[],int len)
{
	int j,temp;
	for(j=1;j<len;j++)
	{
		temp=a1[j];
		a1[j]=a1[0];
		a1[0]=temp;

	
	}

	return;
}
int main_bench()
{
	int n,m,i;
	int a[1000];
	my_scanf("%d %d",&n,&m);
	my_scanf("%d",&a[0]);
	for(i=1;i<n;i++)
	{
		my_scanf(" %d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		yidong(a,n);
	}
	my_printf("%d",a[0]);
	for(i=1;i<n;i++)
		my_printf(" %d",a[i]);
	return 0;
}