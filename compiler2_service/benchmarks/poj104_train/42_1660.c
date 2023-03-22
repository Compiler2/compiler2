#define NUM_ITER 47118

#include <header.h>


int main_bench()
{
	int n,s=0,i,k,a[100000],b[100000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			b[i]=0;
		}
		else
		{
			b[i]=1;
			s=s+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==1)
		{
			if(s==1)
		    {
				my_printf("%d",a[i]);
			}
			else
			{
				my_printf("%d ",a[i]);
				s=s-1;
			}
		}
	}
	return 0;
}
