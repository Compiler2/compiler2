#include <header.h>

int main_bench(){
	double r;
	char s[501];
	char t[501];
	int m,n,i,k=0;
	my_scanf("%lf",&r);
	my_scanf("%s",&s);
	my_scanf("%s",&t);
	m=strlen(s);
	n=strlen(t);
	if(m!=n){
		my_printf("error");
	}else{
		for(i=0;i<n;i++){
			if((s[i]!='A'&&s[i]!='G'&&s[i]!='C'&&s[i]!='T')||(t[i]!='A'&&t[i]!='G'&&t[i]!='C'&&t[i]!='T')){
				k=-1;
				break;
			}else if(s[i]==t[i]){
				k++;
			}
		}
		if(k==-1){
			my_printf("error");
		}else if((1.0*k/n)>r){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	return 0;
}
