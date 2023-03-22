#define NUM_ITER 56092

#include <header.h>

int main_bench(){
	int n,i,r=0,s=0,t=0,u=0,y;
	double a,b,c,d;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&y);
		if(y<=18){
			r=r+1;
		}else if((y>=19)&&(y<=35)){
			s++;
		}else if((y>=36)&&(y<=60)){
			t++;
		}else if(y>=61){
			u++;
		}
	}
		a=100.0*r/n;
		b=100.0*s/n;
		c=100.0*t/n;
		d=100.0*u/n;
		my_printf("1-18: %.2lf%%\n",a);
		my_printf("19-35: %.2lf%%\n",b);
		my_printf("36-60: %.2lf%%\n",c);
		my_printf("60??: %.2lf%%\n",d);
 return 0;
}