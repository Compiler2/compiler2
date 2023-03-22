#include <header.h>

int main_bench(){
	int n;
	int jwjzsh,jwjyx;
	int zsh[100],yx[100];
	my_scanf("%d",&n);
	my_scanf("%d%d",&jwjzsh,&jwjyx);
	double rate0;
	rate0=1.0*jwjyx/jwjzsh;
	double rate[100];
	int i;
	for(i=1;i<n;i++){
		my_scanf("%d%d",&zsh[i],&yx[i]);
		rate[i]=1.0*yx[i]/zsh[i];
		double ch;
		ch=rate[i]-rate0;
		if(ch>=0.05){
			my_printf("better\n");
		}
		else if(ch>=-0.05&&ch<=0.05){
			my_printf("same\n");
		}
		else if(ch<=-0.05){
			my_printf("worse\n");
		}
	}
	return 0;
}