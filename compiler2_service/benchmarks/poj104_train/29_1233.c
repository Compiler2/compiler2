#define NUM_ITER 2723

#include <header.h>

int main_bench(){
	int m,i,j;
	double	sum=0.000,a[100];
	int n[100];
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&n[i]);
	sum=0.000;
	a[0]=2.000/1;
		
			for(j=0;j<n[i];j++){
				
			
			a[j+1]=1.000+1.000/a[j];
			sum+=a[j];
		}
			my_printf("%.3lf\n",sum);
		

	}
	return 0;
}