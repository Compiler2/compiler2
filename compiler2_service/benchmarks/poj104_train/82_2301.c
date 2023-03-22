#define NUM_ITER 35739

#include <header.h>

int main_bench()
{	
	int n=0;
	my_scanf("%d",&n);
	int i=0,hour=0,j=0,max=0;
	int a[100]={0},b[100]={0},c[100]={0};
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
			c[i]=1;
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==1)
			for(j=i;j<n;j++)
			{
				if(c[j]==1)
					hour++;
				else
					break;
			}
		if(hour>max)
			max=hour;
		hour=0;

	}
	my_printf("%d",max);
	return 0;
}

