#include <header.h>

int main_bench(){
	int i,l,m,d=0,b=1;
	char zf[501]={0},zc[501]={0};
	double a,e;
	my_scanf("%lf",&a);
	my_scanf("%s",zf);
	my_scanf("%s",zc);
	l=strlen(zf);
	m=strlen(zc);
	if(l!=m){
		my_printf("error");
	}else{
		for(i=0;i<l;i++){
			if(zf[i]!='A'&&zf[i]!='T'&&zf[i]!='C'&&zf[i]!='G'){
				my_printf("error");
				b=0;
				break;
			}
			if(zc[i]!='A'&&zc[i]!='T'&&zc[i]!='C'&&zc[i]!='G'){
				my_printf("error");
				b=0;
				break;
			}
		}
		if(b==1){
		    for(i=0;i<l;i++){
			     if(zf[i]==zc[i]){
				     d++;
				 }
			}
		    e=1.0*d/l;
	        if(e>a){
		    	my_printf("yes");
			}else{
		    	my_printf("no");
			}
		}
	}
	return 0;
}
