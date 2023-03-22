#define NUM_ITER 56468

#include <header.h>

int main_bench(){
	int n,y;
	double i=1,a,b,c,d;
	my_scanf("%d",&n);
	while(i<=n){
		my_scanf("%d",&y);
		if(y<=18){
			a+=1;
		}else if(y>18&&y<=35){
			b+=1;
		}else if(y>35&&y<=60){
			c+=1;
		}else if(y>60){
			d+=1;
		}
		i++;
	}
		my_printf("1-18: %.2lf%%\n",100*a/n);
		my_printf("19-35: %.2lf%%\n",100*b/n);
		my_printf("36-60: %.2lf%%\n",100*c/n);
		my_printf("60??: %.2lf%%\n",100*d/n);
	return 0;
}