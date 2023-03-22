#include <header.h>

int main_bench(){
	int i;
	double n,a=0,b=0,t=0,k=0;
	char s[501], str[501];

	my_scanf("%lf",&n);
    my_scanf("%s",s);
	my_scanf("%s",str);

	for(i=0;s[i];i++){
		a++;
	}
	for(i=0;str[i];i++){
		b++;
	}
	if(a==b){
	 for(i=0;s[i];i++){
		 if((s[i]=='A'||s[i]=='G'||s[i]=='C'||s[i]=='T')&&(str[i]=='A'||str[i]=='G'||str[i]=='C'||str[i]=='T')){
		   if(s[i]==str[i]){
			 t++;
		   }
		 }
		 else{
			 my_printf("error");
			 k=1;
	         break;	 
		 }
	 }
	if(t/a>n&&k==0){
		my_printf("yes");
	}
	else if(k==0){
			my_printf("no");
	}
	}
	else{
		my_printf("error");
	}


		


	return 0;
}


