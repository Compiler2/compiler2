#include <header.h>

int main_bench(){
	int i,a,l,n;
	double d,b;
	char x[501];
	char y[501];
	

	a=0;
	l=0;
	my_scanf("%lf",&d);
	my_scanf("%s",x);
	my_scanf("%s",y);
	n=strlen(x);
	
	if(strlen(x)!=strlen(y)){
		my_printf("error");
	}else{
		for(i=0;i<n;i++){
			if((x[i]!='A'&&x[i]!='T'&&x[i]!='G'&&x[i]!='C')||
			   (y[i]!='A'&&y[i]!='T'&&y[i]!='G'&&y[i]!='C')){
			   my_printf("error");
			   a=1;
			   break;
			}else{
				if(x[i]==y[i]){
					l++;
				}
			}
		}
		
		if(a==0){
			b=(double)l/(double)n;
			
			if(b>=d){
				my_printf("yes");
			}else if(b<d){
				my_printf("no");
			}

		}
	}


return 0;
}