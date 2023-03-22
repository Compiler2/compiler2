#include <header.h>


int main_bench(){
    double n;
	my_scanf("%lf",&n);
	char s[1000],j[1000];
	my_scanf("%s",s);
	my_scanf("%s",j);
	if(strlen(s)!=strlen(j)){
		my_printf("error");
		return 0;
	}
	int k;
	k=strlen(s);
	int sum=0;
	double rate;
	int i;
	for(i=0;s[i]!='\0';i++){
		if(s[i]!='A'&&s[i]!='G'&&s[i]!='C'&&s[i]!='T'){
			my_printf("error");
			return 0;
		}
		if(j[i]!='A'&&j[i]!='G'&&j[i]!='C'&&j[i]!='T'){
			my_printf("error");
			return 0;
		}
		
		if(s[i]==j[i]){
			sum++;
		}
	}
	rate=1.0*sum/k;
	if(rate>n){
		my_printf("yes");
	}else{
		my_printf("no");
	}
    return 0;
}