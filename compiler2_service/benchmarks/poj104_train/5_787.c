#define NUM_ITER 878317

#include <header.h>

int main_bench(){
	double a;
	my_scanf("%lf",&a);
	char x[1000],y[1000];
	my_scanf("%s %s",x,y);
	int l=strlen(x),k=0,o=strlen(y);
	if(l!=o){
		my_printf("error");
		return 0;
	}
	for(int i=0;i<l;i++){
		if(!(x[i]=='A'||x[i]=='T'||x[i]=='G'||x[i]=='C')){
			my_printf("error");
			return 0;
		}
		if(!(y[i]=='A'||y[i]=='T'||y[i]=='G'||y[i]=='C')){
			my_printf("error");
			return 0;
		}
		if(x[i]==y[i]){
			k++;
		}
	}
	if(1.0*k/l>a){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}
