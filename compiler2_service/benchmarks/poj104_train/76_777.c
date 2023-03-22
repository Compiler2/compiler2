#define NUM_ITER 15330

#include <header.h>

int main_bench()
{
	int n,i,j,s=1,max,min,a[50000],b[50000],c[50000]={0};
	my_scanf("%d",&n);
	my_scanf("%d%d",&a[0],&b[0]);
	max=b[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
		if(a[i]<min)min=a[i];
		if(b[i]>max)max=b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=a[i];j<b[i];j++)
			c[j]=1;
	}
	for(j=min;j<max;j++)
	{
		if(c[j]!=1)
		{
			my_printf("no\n");
			s=0;
			break;
		}
	}
	if(s==1)my_printf("%d %d\n",min,max);
}