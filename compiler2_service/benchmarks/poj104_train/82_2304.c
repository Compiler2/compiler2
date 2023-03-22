#include <header.h>

int main_bench()
{
	int n;
	int i=0;
	my_scanf("%d",&n);
	
	
	int a[200];
	int time[100];
	
	for(i=0;i<200;i++)
		a[i]=0;
	for(i=0;i<100;i++)
		time[i]=0;
	for(i=0;i<2*n;i++)
		my_scanf("%d",&a[i]);
	int m=0;
	for(i=0;i<2*n;i=i+2)
	{
		if(a[i]>=90&&a[i]<=140&&a[i+1]>=60&&a[i+1]<=90)
			time[m]++;
		else
			m++;
	}
	int max=0;
	for(i=0;i<100;i++)
	{
		if(time[i]>max)
			max=time[i];
	}

	my_printf("%d\n",max);
	return 0;
}
