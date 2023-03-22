#define NUM_ITER 44819

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	double patient[100];
	for(int m=0;m<n;m++){
		my_scanf("%lf",&patient[m]);
	}
	double a=0,b=0,c=0,d=0;
	double p;
	for(int o=0;o<n;o++){
		p=patient[o];
		if(p>0&&p<=18)
			a++;
		if(p>=19&&p<=35)
			b++;
		if(p>=36&&p<=60)
			c++;
		if(p>60)
			d++;
	}
	my_printf("1-18: %.2lf%%\n",a/(a+b+c+d)*100);
	my_printf("19-35: %.2lf%%\n",b/(a+b+c+d)*100);
	my_printf("36-60: %.2lf%%\n",c/(a+b+c+d)*100);
	my_printf("60??: %.2lf%%",d/(a+b+c+d)*100);
	return 0;
}