#define NUM_ITER 55239

#include <header.h>

int main_bench(){
	int a[1000];
	int s1=0,s2=0,s3=0,s4=0;
	int n,i;
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		if (a[i]<=18){
			s1++;
		}
		if (a[i]>18 && a[i]<=35){
			s2++;
		}
		if (a[i]>35 && a[i]<61){
			s3++;
		}
		if (a[i]>60){
			s4++;
		}
	}
    double x,b,c,d;
	x=s1*1.0*100/n;
	b=s2*1.0*100/n;
	c=s3*1.0*100/n;
	d=s4*1.0*100/n;
	my_printf("1-18: %.2lf%%\n",x);
	my_printf("19-35: %.2lf%%\n",b);
	my_printf("36-60: %.2lf%%\n",c);
	my_printf("60??: %.2lf%%\n",d);
	return 0;
}