#define NUM_ITER 54711

#include <header.h>

int main_bench(){
	int i,sum,young=0,mid=0,old=0,oldest=0;
	double ap,mp,op,oep;
	my_scanf("%d\n",&sum);
	int age[101];
	for(i=1;i<=sum;i++){
		my_scanf("%d",&(age[i]));}
	for(i=1;i<=sum;i++){
		if((age[i])>=1&&(age[i])<=18){young++;}
		if((age[i])>=19&&(age[i])<=35){mid++;}
		if((age[i])>=36&&(age[i])<=60){old++;}
		if((age[i])>=61){oldest++;};
	}
    ap=1.0*young/sum*100;
	mp=1.0*mid/sum*100;
	op=1.0*old/sum*100;
	oep=100.0-ap-mp-op;
	my_printf("1-18: %.2lf",ap);my_printf("%%\n");
    my_printf("19-35: %.2lf",mp);my_printf("%%\n");
    my_printf("36-60: %.2lf",op);my_printf("%%\n");
    my_printf("60??: %.2lf",oep);my_printf("%%\n");

	  
return 0;
}