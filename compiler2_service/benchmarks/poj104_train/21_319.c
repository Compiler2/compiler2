#define NUM_ITER 39817

#include <header.h>

int main_bench()
{
	int n,a[300],i,max,mat,t=0,sum=0;
	float ave;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	ave=(float)sum/n;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(fabs(a[i]-ave)>fabs(max-ave))
			max=a[i];
		else if(fabs(a[i]-ave)==fabs(max-ave))
		{
			t=1;
			mat=a[i];
		}
	}
	if(t==0)
		my_printf("%d",max);
	else
		my_printf("%d,%d",max,mat);
}


