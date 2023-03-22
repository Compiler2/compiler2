#include <header.h>

int main_bench(){
	int i,x,y,m=0;
	double n;
	char a[501],b[501];
	my_scanf("%lf\n",&n);
	gets(a);
	gets(b);
	x=strlen(a);
	y=strlen(b);
	if(x==y){
		for(i=0;i<x;i++){
			if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T'){
				my_printf("error");
				break;
			}else{
				if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'){
					my_printf("error");
					break;
				}else{
					if(a[i]==b[i])
						m++;
			}}
			if(i==x-1){
				if(1.0*m/x>n){
					my_printf("yes");
				}else{
					my_printf("no");
		}}}
	}else{
		my_printf("error");
	}
	return 0;
}