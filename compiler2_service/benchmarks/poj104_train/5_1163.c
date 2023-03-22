#define NUM_ITER 971100

#include <header.h>

int main_bench(){
	double x,s=0;
	char a[502],b[502];
	int len1,len2,i;
	my_scanf("%lf %s %s",&x,a,b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2){
		my_printf("error");
		return 0;
	}
	for(i=0;i<len1;i++){
		if(a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T'){
			my_printf("error");
			return 0;
		}
	}
    for(i=0;i<len2;i++){
		if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'){
			my_printf("error");
			return 0;
		}
	}
	for(i=0;i<len1;i++){
		if(a[i]==b[i]){
			s++;
		}
	}
	s=s/len1;
	if(s>x){
		my_printf("yes");
	}
	else{
		my_printf("no");
	}
	return 0;
}





