#define NUM_ITER 971413

#include <header.h>

int main_bench(){
double n,x[4];
int i;
double a=0,b=0,c=0,d=0;
int m;
my_scanf("%lf",&n);
for(i=0;i<n;i++){
	my_scanf("%d ",&m);
	if(m>60){
		d=d+1;
	}else if(m<19){
		a=a+1;
	}else if(m>=19&&m<=35){
		b=b+1;
	}else if(m<=60&&m>=36){
		c=c+1;
	}
}
x[0]=100*(a/n);
x[1]=100*(b/n);
x[2]=100*(c/n);
x[3]=100*(d/n);
my_printf("1-18: %.2lf%%\n",x[0]);
my_printf("19-35: %.2lf%%\n",x[1]);
my_printf("36-60: %.2lf%%\n",x[2]);
my_printf("60??: %.2lf%%\n",x[3]);
return 0;
}