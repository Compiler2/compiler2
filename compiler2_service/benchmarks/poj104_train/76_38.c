#define NUM_ITER 12168

#include <header.h>

int main_bench()
{
	int n,a[50000],b[50000],c[10001]={0},i,j,max=0,min=10001,s=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
		for(j=a[i];j<b[i];j++)
		{
			c[j]++;
		}
		if(a[i]<min)min=a[i];
		if(b[i]>max)max=b[i];
	}
	for(i=min;i<max;i++)
	{
		if(c[i]==0)
		{
			my_printf("no\n");
			s++;
			break;
		}
	}
	if(s==0)my_printf("%d %d\n",min,max);
}