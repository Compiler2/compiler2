#include <header.h>

int main_bench(){
	int n,i,age;
    my_scanf("%d",&n);
	double a=0,b=0,c=0,d=0;
    for(i=0;i<n;i++){
		my_scanf("%d",&age);
		if(age<19){
			a=a+1;
		}else if(age<36){
			b=b+1;
		}else if(age<61){
			c=c+1;
		}else{
			d=d+1;
		}
	}
	a=a/n*100;
	b=b/n*100;
	c=c/n*100;
	d=d/n*100;
		my_printf("1-18: %.2lf%%\n",a);
		my_printf("19-35: %.2lf%%\n",b);
        my_printf("36-60: %.2lf%%\n",c);
        my_printf("60??: %.2lf%%\n",d);
				return 0;
}
