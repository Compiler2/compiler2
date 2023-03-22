#include <header.h>

int main_bench(){
	char x[600],y[600];
	int b=0,i;
	double a;
	my_scanf("%lf\n",&a);
	my_scanf("%s\n",x);
	my_scanf("%s",y);
	if(strlen(x)!=strlen(y)){
		my_printf("error");
		return 0;
	}
	for(i=0;i<600;i++){
		if(x[i]!='A'&&x[i]!='G'&&x[i]!='C'&&x[i]!='T'&&x[i]!=0){
			my_printf("error");
			return 0;
		}
		if(y[i]!='A'&&y[i]!='G'&&y[i]!='C'&&y[i]!='T'&&y[i]!=0){
			my_printf("error");
			return 0;
		}
		if(x[i]==0){
			break;
		}
		if(x[i]==y[i]){
			b++;
		}
	}
	if((1.0*b/strlen(x))>=a){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}