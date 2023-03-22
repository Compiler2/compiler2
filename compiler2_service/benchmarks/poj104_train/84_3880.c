#define NUM_ITER 15300

#include <header.h>

int main_bench()
{
	int a[100001]={0},max1=0,max2=0,n,i,p;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		if(max1<a[i])
		{
			max1=a[i];
			p=i;
		}
	}
	a[p]=0;
	for(i=1;i<=n;i++)
	{
		if(max2<a[i])
			max2=a[i];
	}
	my_printf("%d\n%d\n",max1,max2);
	return 0;
}
