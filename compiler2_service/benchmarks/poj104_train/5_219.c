#define NUM_ITER 1091834

#include <header.h>


int main_bench()
{
	int i,z=0,e=0,k=0;
	double v;
	char x[501],y[501];
	my_scanf("%lf%s%s",&v,&x,&y);
	for(i=0;x[i];i++){
		z++;
		if(!(x[i]=='A'||x[i]=='T'||x[i]=='G'||x[i]=='C')){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;y[i];i++){
		e++;
		if(!(y[i]=='A'||y[i]=='T'||y[i]=='G'||y[i]=='C')){
			my_printf("error");
			return 0;
		}
	}
	if(z!=e){
		my_printf("error");
		return 0;
	}
	for(i=0;x[i];i++){
		if(x[i]==y[i]){
			k++;
		}
	}
	if(1.0*k/z>v){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}