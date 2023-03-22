#include <header.h>

int main_bench(){
	int m,n;
	double r;
	my_scanf("%d",&m);
	int i,j;
	for(i=0;i<m;i++){
		r=0;
		my_scanf("%d",&n);
		double f0,f1,f2;
		f0=2;f1=1;
		if(n==1){
			my_printf("%.3lf\n",f0/f1);
		}else{
			for(j=0;j<n;j++){
				f2=f0/f1;
				f0=f1+f0;
				f1=f2*f1;
				r+=f2;
			}
			my_printf("%.3lf\n",r);
		}
	}
	return 0;
}