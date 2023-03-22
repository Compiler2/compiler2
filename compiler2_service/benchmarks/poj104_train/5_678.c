#include <header.h>

int main_bench(){
	double n;
	int k,i,j=0,l;
	char s[501];
	char c[501];
	my_scanf("%lf",&n);
	my_scanf("%s",s);
	my_scanf("%s",c);
	k=strlen(s);
	l=strlen(c);
	for(i=0;s[i];i++){
		if(k!=l||(s[i]!='A'&&s[i]!='G'&&s[i]!='C'&&s[i]!='T')||(c[i]!='A'&&c[i]!='G'&&c[i]!='C'&&c[i]!='T')){
			j=-1;
			break;
		}
		if(0==s[i]-c[i]){
			j++;
		}
	}
	if(n<=1.00*j/k&&j!=0){
		my_printf("yes");
	}else if(j==-1){
		my_printf("error");
	}else{
		my_printf("no");
	}
	return 0;
}