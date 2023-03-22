#define NUM_ITER 946311

#include <header.h>

int main_bench(){
	int i;
	double a,k=0;
	char x[500],y[500];
	my_scanf("%lf",&a);
	my_scanf("%s",x);
	my_scanf("%s",y);
	if(strlen(x)!=strlen(y)){
		my_printf("error");
		return 0;
	}else{
		for(i=0;x[i]!='\0';i+=1){
			if((x[i]!='A'&&x[i]!='T'&&x[i]!='C'&&x[i]!='G')||(y[i]!='A'&&y[i]!='T'&&y[i]!='C'&&y[i]!='G')){
				my_printf("error");
				return 0;
			}
		}
		for(i=0;x[i]!='\0';i+=1){
			if(x[i]==y[i]){
				k+=1;
			}
		}
		if(k/i>a){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	return 0;
}