#include <header.h>

int main_bench(){
	double p,q;
	int a,b,m=0,brak=0;
	my_scanf("%lf",&p);
	char k[600],kk[600];
	my_scanf("%s",k);
	my_scanf("%s",kk);
	a=strlen(k);
	b=strlen(kk);
	for(int h=0;;h++){
		if(a!=b){
		my_printf("error");
		break;
		}
		for(int c=0;c<a;c++){
			if(!(k[c]=='A'||k[c]=='T'||k[c]=='C'||k[c]=='G')){brak++;}
            if(!(kk[c]=='A'||kk[c]=='T'||kk[c]=='C'||kk[c]=='G')){brak++;}
		}
		if(brak!=0){
			my_printf("error");
		    break;
		}
		for(int i=0;i<a;i++){
			if(k[i]==kk[i]){
				m++;
			}
		}
        q=m/(a*1.0);
        if(q>=p){
			my_printf("yes");
		}
		if(q<p){
			my_printf("no");
		}
		break;
	}
	return 0;
}
