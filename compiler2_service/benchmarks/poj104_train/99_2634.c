#define NUM_ITER 51241

#include <header.h>

int main_bench()
{
	int a[100],i,n;
	double x1,x2,x3,x4,s1=0,s2=0,s3=0,s4=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	    if( a[i]<19&&a[i]>0)
			s1+=1;
		if(a[i]<36&&a[i]>18)
			s2+=1;
		if(a[i]<61&&a[i]>35)
			s3+=1;
		if(a[i]<101&&a[i]>60)
			s4+=1;
	}
	x1=s1/n*100;
    x2=s2/n*100;
    x3=s3/n*100;
    x4=s4/n*100;
	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",x1,x2,x3,x4);
}
		
