#include <header.h>


int main_bench()
{
	int n;
	int a[101];
	int i;
	int aa[4]={0};
	double m,b[4];

	my_scanf("%d",&n);

	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);

	for(i=0;i<n;i++)
		if(a[i]<=18)
			aa[0]++;
		else if(a[i]<=35)
			aa[1]++;
		else if(a[i]<=60)
			aa[2]++;
		else
			aa[3]++;
	m=n;
	for(i=0;i<4;i++)
	{
		b[i]=100*aa[i]/m;
	}
	my_printf("1-18: %.2lf%%\n",b[0]);
	my_printf("19-35: %.2lf%%\n",b[1]);
	my_printf("36-60: %.2lf%%\n",b[2]);
	my_printf("60??: %.2lf%%\n",b[3]);
}