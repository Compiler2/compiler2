#define NUM_ITER 44003

#include <header.h>

int main_bench()
{
	int a[4]={0},b[100],sum=0;
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&b[i]);
		if(b[i]<=18)
			a[0]++;
		else if(b[i]>18&&b[i]<36)
			a[1]++;
        else if(b[i]>35&&b[i]<61)
			a[2]++;
		else 
			a[3]++;
    }
	sum=n;
	my_printf("1-18: %.2lf%%\n",(double)a[0]/(double)sum*100);
	my_printf("19-35: %.2lf%%\n",(double)a[1]/(double)sum*100);
	my_printf("36-60: %.2lf%%\n",(double)a[2]/(double)sum*100);
	my_printf("60??: %.2lf%%\n",(double)a[3]/(double)sum*100);
	return 0;
}