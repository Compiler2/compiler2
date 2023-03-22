#define NUM_ITER 613

#include <header.h>

int main_bench()
{
	int a[1000],i,j,s,c,k,sum[1000],s0=0,qqq,n;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum[i]=0;
	for(j=1;j<=n;j++)
		{my_scanf("%d",&a[j]);
		if(a[j]==0)
			s0++;
		sum[i]=sum[i]+a[j];
		}
		if(i==1)
		qqq=sum[1];
		else
		{
		if(sum[i-1]>sum[i])
		qqq=sum[i];
		}
	}
	k=n-qqq/255;
	c=(s0+4-2*k)/2;
	s=(c-2)*(k-2);
	my_printf("%d",s);
	return 0;
}