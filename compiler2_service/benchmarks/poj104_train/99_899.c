#define NUM_ITER 56223

#include <header.h>

int main_bench(){
	int n,a[101],i,b=0,c=0,d=0,e=0;
	double bb,cc,dd,ee;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<=18) b++;
		else if(a[i]>=19&&a[i]<=35) c++;
		else if(a[i]>=36&&a[i]<=60) d++;
		else e++;
	}
	bb=100.0*b/n;
	cc=100.0*c/n;
	dd=100.0*d/n;
	ee=100.0*e/n;
	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",bb,cc,dd,ee);
	return 0;
}
	
