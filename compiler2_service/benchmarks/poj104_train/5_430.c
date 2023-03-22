#include <header.h>

int main_bench(){
	double x,p;
	int i,l,k=0,c=1;
	my_scanf("%lf",&x);
	char c1[501],c2[501];
	my_scanf("%s",c1);
	my_scanf("%s",c2);
	l=strlen(c1);
	for(i=0;i<l;i++){
		if((c1[i]!='A')&&(c1[i]!='T')&&(c1[i]!='C')&&(c1[i]!='G')){
			my_printf("error");
			c=0;
			break;
		}
		if((c2[i]!='A')&&(c2[i]!='T')&&(c2[i]!='C')&&(c2[i]!='G')){
			my_printf("error");
			c=0;
			break;
		}
		if(c1[i]==c2[i]){
			k++;
		}
	}
	if(c){
		p=((double)k)/((double)l);
		if(p>x){
			my_printf("yes");
		}
		else{my_printf("no");}
	}
	return 0;
}