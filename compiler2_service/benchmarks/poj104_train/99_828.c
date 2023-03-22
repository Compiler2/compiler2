#include <header.h>

int main_bench(){
	int i,a,n,b=0,c=0,d=0,e=0;
	double A,B,C,D;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
	my_scanf("%d",&a);
	if(a>=1&&a<=18){
	b+=1;
	}else if(a>=19&&a<=35){
	c+=1;
	}else if(a>=36&&a<=60){
		d+=1;
	}else if(a>=61){
	e+=1;
	}
	}
	A=1.0*b/n;
	B=1.0*c/n;
	C=1.0*d/n;
	D=1.0*e/n;
	my_printf("1-18: %.2lf%%\n",A*100);
	my_printf("19-35: %.2lf%%\n",B*100);
	my_printf("36-60: %.2lf%%\n",C*100);
	my_printf("60??: %.2lf%%\n",D*100);
	return 0;
}