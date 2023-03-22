#define NUM_ITER 53388

#include <header.h>

int main_bench()
{   int n,a[100],i;
    double b=0,c=0,d=0,e=0,sum=0;
    my_scanf("%d",&n);
	for(i=1;i<=n;i++){
			my_scanf("%d",&a[i]);
			sum++;
			if(a[i]>=1&&a[i]<=18){
				b++;
			}
		    if(a[i]>=19&&a[i]<=35){
				c++;
			}
             if(a[i]>=36&&a[i]<=60){
				d++;
			}
             if(a[i]>60){
				e++;
			}
	}
	my_printf("1-18: %.2lf%%\n",100*b/sum);
	my_printf("19-35: %.2lf%%\n",100*c/sum);
	my_printf("36-60: %.2lf%%\n",100*d/sum);
	my_printf("60??: %.2lf%%\n",100*e/sum);
	return 0;
}

