#include <header.h>

int main_bench(){
	int n,i,a=0,b=0,c=0,d=0,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&k);
		if(k<19){
		a++;	
		}else if(k<36){
			b++;
		}else if(k<61){
			c++;
		}else{
			d++;
		}
	}
	my_printf("1-18: %.2lf",100.0*a/n);
	my_printf("%%\n");
	my_printf("19-35: %.2lf",100.0*b/n);
		my_printf("%%\n");
	my_printf("36-60: %.2lf",100.0*c/n);
		my_printf("%%\n");
	my_printf("60??: %.2lf",100.0*d/n);
		my_printf("%%");
	return 0;
}