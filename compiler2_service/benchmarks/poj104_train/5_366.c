#include <header.h>

int main_bench(){
	int n,k=0,i;
	double e;
	char str[501],s[501];
	my_scanf("%lf",&e);
	my_scanf("%s %s",str, s);
	for(i=0;i<strlen(str);i++){
		if(str[i]!='A'&&str[i]!='T'&&str[i]!='G'&&str[i]!='C'){
			my_printf("error");
		    return 0;
		}
	}
	for(i=0;i<strlen(s);i++){
		if(s[i]!='A'&&s[i]!='T'&&s[i]!='G'&&s[i]!='C'){
			my_printf("error");
			return 0;
		}
	}
	if(strlen(str)!=strlen(s)){
		my_printf("error");
	}else if(strlen(str)==strlen(s)){
		n=strlen(s);
		for(i=0;i<n;i++){
			if(str[i]==s[i]){
				k++;
			}
		}
		if((1.0*k/n)>e){
			my_printf("yes");
		}else{
			my_printf("no");
		}
	}
	return 0;
 }


