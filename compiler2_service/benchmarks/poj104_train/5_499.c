#include <header.h>


int main_bench(){
	char k[501],h[501];
	double c,d;
	my_scanf("%lf",&c);
	my_scanf("%s",k);
	my_scanf("%s",h);
	int sum=0;
	int a;
	a=strlen(k);
	int b;
	b=strlen(h);
	if(a!=b)
		my_printf("error");
	else if(a==b){
		for(int i=0;i<a;i++){
			if((k[i]!='A'&&k[i]!='T'&&k[i]!='C'&&k[i]!='G')||(h[i]!='A'&&h[i]!='T'&&h[i]!='C'&&h[i]!='G')){
				my_printf("error");
			return 0;
			}
			else{
				if(k[i]==h[i])
					sum++;
			}
		}
		if(1.0*sum/a>c)
			my_printf("yes");
		else
			my_printf("no");
	}

	return 0;
}