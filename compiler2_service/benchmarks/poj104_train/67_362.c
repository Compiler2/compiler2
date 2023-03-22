#define NUM_ITER 34217

#include <header.h>

int main_bench(){
   	int n,i,a[1000],b[1000];
	double m,p ;
         my_scanf("%d", &n);
	for (i = 0; i < n; i++) {
        my_scanf("%d %d",&a[i],&b[i]);
	}
		m=(double)b[0]/(double)a[0];
	for (i = 1; i < n; i++) {
		p=(double)b[i]/(double)a[i];
		if(m-p>0.05){
		my_printf("worse\n");
		}
		else if(p-m>0.05){
		my_printf("better\n");
		}
		else if (m-p<=0.05||p-m<=0.05) {
			my_printf("same\n");
		}
	}
	return 0;
}