#define NUM_ITER 895287

#include <header.h>

int main_bench(){
	int b,c,f=0,e=0,i;
	double a,h;
	char d[3][502];
	my_scanf("%lf",&a);
	for(i=0;i<2;i++){
		my_scanf("%s",d[i]);
	}
	b=strlen(d[0]);
	c=strlen(d[1]);
	if(b==c){
		for(f=0;f<b;f++){
			if(d[0][f]==d[1][f]){
				e++;
			}
		}
		for(f=0;f<b;f++){
			if((d[0][f]!='A'&&d[0][f]!='G'&&d[0][f]!='C'&&d[0][f]!='T')||(d[1][f]!='A'&&d[1][f]!='G'&&d[1][f]!='C'&&d[1][f]!='T')){
				break;
			}
		}
		if(f==b){
		h=e*1.0/b;
		if(h>a){
			my_printf("yes");
		}
		else{
			my_printf("no");
		}
		}
		else{
			my_printf("error");
		}
	}
	else{
		my_printf("error");
	}
	return 0;
}
