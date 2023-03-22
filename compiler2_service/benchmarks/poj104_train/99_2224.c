#define NUM_ITER 57254

#include <header.h>

int main_bench()
{
	int n;
	int sz[100];

	int i;
	int a=0,b=0,c=0,d=0;
    
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

		my_printf("1-18: %.2lf%%\n",1.0*a/n*100);
		my_printf("19-35: %.2lf%%\n",1.0*b/n*100);
		my_printf("36-60: %.2lf%%\n",1.0*c/n*100);
		my_printf("60??: %.2lf%%\n",1.0*d/n*100);
	
	return 0;
}