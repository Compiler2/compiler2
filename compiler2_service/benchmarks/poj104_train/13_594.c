#define NUM_ITER 9995

#include <header.h>

int main_bench()
{
	int n,i,j,k;
    int a[20000];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{if(a[j]==a[i])
		a[j]=0;}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		k=i;
	}
	for(i=0;i<k;i++)
	{	if(a[i]!=0)
		my_printf("%d ",a[i]);}
	my_printf("%d",a[k]);
}
