#include <header.h>

int main_bench(){
	int i,b,s=0,j,a;
	double r,R;
	char gene[500],gene2[500];
	my_scanf("%lf",&r);
	my_scanf("%s",gene);
	my_scanf("%s",gene2);
	b=strlen(gene2);
	a=strlen(gene);
	if(a!=b){
			my_printf("error");
			return 0;
		}
	for(i=0;i<a;i++){
		if(gene[i]!='A'&&gene[i]!='T'&&gene[i]!='C'&&gene[i]!='G'){
			my_printf("error");
			return 0;
		}
		if(gene2[i]!='A'&&gene2[i]!='T'&&gene2[i]!='C'&&gene2[i]!='G'){
			my_printf("error");
			return 0;
		}
	}
	for(i=1;i<=b;i++){
		if(gene[i]==gene2[i]){
			s++;
		}
	}
	R=1.000*s/b;
	if(R>r){
		my_printf("yes");
	}
	else if(R<=r) {
		my_printf("no");
	}

	return 0;
}
