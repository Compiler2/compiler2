#define NUM_ITER 54160

#include <header.h>

int main_bench()
{
	int n,i,a[100];
	double b[4]={0,0,0,0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	    my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		if(a[i]>=1&&a[i]<=18)
			b[0]=b[0]+1;
		else if(a[i]>=19&&a[i]<=35)
			b[1]=b[1]+1;
		else if(a[i]>=36&&a[i]<=60)
			b[2]=b[2]+1;
		else 
			b[3]=b[3]+1;
	my_printf("1-18: %.2lf%%\n",b[0]/n*100);
	my_printf("19-35: %.2lf%%\n",b[1]/n*100);
	my_printf("36-60: %.2lf%%\n",b[2]/n*100);
	my_printf("60??: %.2lf%%\n",b[3]/n*100);
}

	