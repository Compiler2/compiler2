#include <header.h>

int main_bench(){
	int i,sim=0;
	double n;
	char one[501],two[501];
	my_scanf("%lf",&n);
	my_scanf("%s",one);
	my_scanf("%s",two);
	if(strlen(one)!=strlen(two)){
		my_printf("error\n");
		return 0;
	}
	for(i=0;one[i];i++){
		if((one[i]!='A')&&(one[i]!='T')&&(one[i]!='C')&&(one[i]!='G')){
			my_printf("error\n");
			return 0;
		}
	}
	for(i=0;two[i];i++){
			if(two[i]!='A'&&two[i]!='T'&&two[i]!='C'&&two[i]!='G'){
			my_printf("error\n");
			return 0;
			}
	}
	for(i=0;one[i];i++){
		if(one[i]==two[i]){
			sim++;
		}
	}
	if(1.0*sim/strlen(one)>n){
		my_printf("yes\n");
	}
	else{
		my_printf("no\n");
	}
return 0;
}