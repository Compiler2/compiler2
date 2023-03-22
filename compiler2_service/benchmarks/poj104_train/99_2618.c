#define NUM_ITER 49844

#include <header.h>

int main_bench(){
	int n,i,x[100];
	double a=0,b=0,c=0,d=0;
		my_scanf("%d",&n);
		for(i=0;i<n;i++){
			my_scanf("%d",&x[i]);
		}for(i=0;i<n;i++){
			if(x[i]>=1&&x[i]<=18){
				a=a+1;
			}
		
			if(x[i]>=19&&x[i]<=35){
				b=b+1;
			}
		
			if(x[i]>=36&&x[i]<=60){
				c=c+1;
			}
		
			if(x[i]>60){
				d=d+1;
			}
		
		}
		double y=0;
		y=a+b+c+d;
		double e=0,f=0,g=0,h=0;
		e=(a/y)*100;
		f=(b/y)*100;
		g=(c/y)*100;
		h=(d/y)*100;
		my_printf("1-18: %.2lf%%\n",e);
		my_printf("19-35: %.2lf%%\n",f);
		my_printf("36-60: %.2lf%%\n",g);
		my_printf("60??: %.2lf%%\n",h);
		return 0;
}
	