#include <header.h>

int main_bench(){
	int n,sz[100],i;
	double a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		if(sz[i]<=18){
			a++;
		}
		else if(sz[i]<=35){
			b++;
		}
		else if(sz[i]<=60){
			c++;
		}
		else{
			d++;
		}
	}
	a=100.0*a/n;
	b=100.0*b/n;
	c=100.0*c/n;
	d=100.0*d/n;
	my_printf("1-18: %.2lf%%\n",a);
    my_printf("19-35: %.2lf%%\n",b);
	my_printf("36-60: %.2lf%%\n",c);
	my_printf("60??: %.2lf%%\n",d);
	return 0;
}
 
 
 