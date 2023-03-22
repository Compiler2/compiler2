#define NUM_ITER 55929

#include <header.h>

int main_bench()
{
	int n,p[100],a=0,b=0,c=0,d=0,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){
		if(p[i]<=18){
			a++;
		}
		else if(p[i]>=19&&p[i]<=35){
			b++;
		}
		else if(p[i]>=36&&p[i]<=60){
			c++;
		}
		else{
			d++;
		}
	}
	my_printf("1-18: %.2lf%%\n",(double)a/n*100);
    my_printf("19-35: %.2lf%%\n",(double)b/n*100);
    my_printf("36-60: %.2lf%%\n",(double)c/n*100);
    my_printf("60??: %.2lf%%\n",(double)d/n*100);
	return 0;
}