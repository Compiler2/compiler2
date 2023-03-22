#include <header.h>

int main_bench(){
	int a,b,i;
	double k,c=0;
	char d[501],e[501];
	my_scanf("%lf",&k);
	my_scanf("%s",&d);
	my_scanf("%s",&e);
	a=strlen(d);
	b=strlen(e);
	if(a>b||a<b){
		my_printf("error");
		return 0;
	}
	for(i=0;i<a;i++){
		if(d[i]!='A'&&d[i]!='C'&&d[i]!='G'&&d[i]!='T'){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<b;i++){
		if(e[i]!='A'&&e[i]!='C'&&e[i]!='G'&&e[i]!='T'){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<a;i++){
		if(d[i]==e[i]){
			c++;
		}
	}
	if((c/(1.0*a))>k){
		my_printf("yes");
	}
	else my_printf("no");
	return 0;
}
