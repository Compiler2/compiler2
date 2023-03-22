#define NUM_ITER 4

#include <header.h>

int main_bench()
{
	int m;
	int a[10000];
	int i,j,k;
	for(i=2,k=0;i<10000;i++)
	{
		for(j=2;j<=i;)
		{
			if(i%j==0)
				break;
			j++;
		}
		if(j==i)
		{
			a[k]=i;
			k++;
		}
	}
	my_scanf("%d",&m);
	for(i=0;a[i]<=m;i++)
	{
		for(j=i;a[j]<=m-a[i];j++)
		{
			if(a[i]+a[j]==m)
			{
				my_printf("%d %d\n",a[i],a[j]);
			}
		}
	}
	return 0;
}