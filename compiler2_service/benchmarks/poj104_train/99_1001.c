#define NUM_ITER 55484

#include <header.h>

int main_bench(){
	int n,i,a,b,c,d,x;
	double m,k,p,q;
	a=0;
	b=0;
	c=0;
    d=0;
	i=1;
	my_scanf("%d",&n);
	while(i<=n){
		my_scanf("%d",&x);
		if(x<=18){
			a+=1;
		}else if(x>=19&&x<=35){
			b+=1;
		}else if(x>=36&&x<=60){
			c+=1;
		}else if(x>=60){
			d+=1;
}
			i++;
		
	}
		m=1.0*a/n*100;
		k=1.0*b/n*100;
		p=1.0*c/n*100;
		q=1.0*d/n*100;
		my_printf("1-18: %.2lf%\n",m);
		my_printf("19-35: %.2lf%\n",k);
		my_printf("36-60: %.2lf%\n",p);
		my_printf("60??: %.2lf%\n",q);
		return 0;
}