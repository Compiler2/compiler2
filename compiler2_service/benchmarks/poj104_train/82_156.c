#define NUM_ITER 35171

#include <header.h>

int main_bench()
{
	int a[1000],b[1000],i,n,m[100]={0},k,j=0,max=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{
			m[j]++;
		}
		else
			j++;
	}
	k=j+1;
	for(j=0;j<k;j++)
	{
		if(m[j]>max)
			max=m[j];
	}
	my_printf("%d",max);
	return 0;
}