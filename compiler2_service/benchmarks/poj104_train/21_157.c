#define NUM_ITER 42684

#include <header.h>

float jue(float t)
{
	if(t<0)
		t=-t;
	return t;
}
int main_bench()
{
	int n,a[300],shu[300];
	my_scanf("%d",&n);
	int i;
	float s=0,ave,max,tem;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		s=s+a[i];
	}
	ave=s/n;
	max=jue(a[0]-ave);
	int k=0;
	for(i=1;i<n;i++)
	{
		tem=jue(a[i]-ave);
		if(tem>max)
			max=tem;
	}
	for(i=0;i<n;i++)
	{
		if(jue(a[i]-ave)==max)
		{
			shu[k]=a[i];
			k++;
		}
	}
	int j,t;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(shu[i]>shu[j])
			{
				t=shu[i];
				shu[i]=shu[j];
				shu[j]=t;
			}
		}
	}
	for(i=0;i<k-1;i++)
		my_printf("%d,",shu[i]);
	my_printf("%d",shu[k-1]);
	return 0;
}
