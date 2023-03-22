#define NUM_ITER 43783

#include <header.h>

int main_bench()
{
	int n,a[100],i,max=0,nmax=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){my_scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	{
		if(a[i]>max) max=a[i];}
	for(i=0;i<n;i++)
	{if(a[i]==max)
	a[i]=0;}
    for(i=0;i<n;i++)
	{
		if(a[i]>nmax) nmax=a[i];}
	my_printf("%d\n%d\n",max,nmax);
}