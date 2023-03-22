#include <header.h>

int main_bench(){
	int i,a=1,b=1;
	double n,p=0.0,q;
	char d1[500],d2[500];
	my_scanf("%lf%s%s",&n,d1,d2);

	if(strlen(d1)!=strlen(d2)){
		a=0;
	}
	if(a==1){
		for(i=0;d1[i]!='\0';i++){
			if((d1[i]=='A' || d1[i]=='T' || d1[i]=='C' || d1[i]=='G') && (d2[i]=='A' || d2[i]=='T' || d2[i]=='C' || d2[i]=='G')){
				b=1;
			}else{
				b=0;
				break;
			}
		}
	}
	if(a==0 || b==0){
		my_printf("error");
	}

	if(a==1 && b==1){
		for(i=0;d1[i]!='\0';i++){
			if(d1[i]==d2[i]){
				p+=1.0;
			}
		}
		q=p/(strlen(d1));
		if(q>n){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}

	return 0;
}