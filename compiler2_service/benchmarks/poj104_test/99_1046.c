#define NUM_ITER 55307

#include <header.h>

int main_bench() {
	int n,a=0,b=0,c=0,d=0,m,i;
	double o,p,q,r;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&m);
		if((m<=18)&&(m>=1)){
			a+=1;
		}else if((m>=19)&&(m<=35)){
			b+=1;
		}else if((m>=36)&&(m<=60)){
			c+=1;
		}else{
			d+=1;
		}
	}
    o=1.0*a*100/n;
    p=1.0*b*100/n;
	q=1.0*c*100/n;
	r=1.0*d*100/n;
		my_printf("1-18: ");
		my_printf("%.2lf%%\n",o);
		my_printf("19-35: ");
		my_printf("%.2lf%%\n",p);
		my_printf("36-60: ");
		my_printf("%.2lf%%\n",q);
		my_printf("60??: ");
		my_printf("%.2lf%%\n",r);
	    return 0;
	}