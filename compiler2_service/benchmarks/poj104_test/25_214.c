#include <header.h>

int main_bench(){
	int n,i;
	double s;
	my_scanf("%d",&n);
	if(n==0){
		s=1;
		my_printf("%.0lf",s);
	}
	if(n==1){
		s=2;
			my_printf("%.0lf",s);
	
	}
	if(n>=2){
		s=1;
		i=1;
		while(i<=n){
			s=2*s;
			i++;
		}
		my_printf("%.0lf",s);
	}
	
	return 0;
}
