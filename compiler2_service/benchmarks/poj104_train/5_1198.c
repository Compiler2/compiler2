#include <header.h>

int main_bench(){
	int i, j, k, p=0, q=0, judge=0;
	double n;
	char a[501], b[501];
	my_scanf("%lf", &n);
	my_scanf("%s", a);
	my_scanf("%s", b);
	p=strlen(a);
	for(i=0;i<p;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<p;i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<p;i++){
		if(a[i]==b[i]){
			q++;
		}
	}
	if(1.0*q/p>=n){
		my_printf("yes");
	}
	else{
		my_printf("no");
	}
	return 0;
}