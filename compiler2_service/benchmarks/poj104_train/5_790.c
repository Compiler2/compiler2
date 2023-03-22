#define NUM_ITER 875257

#include <header.h>

    int main_bench(){
    double n;
	my_scanf("%lf\n",&n);
	char a[501],b[501];
	my_scanf("%s\n",&a);
	my_scanf("%s",&b);
    int la=strlen(a),lb=strlen(b),i;
	int s=0;double e;
	if(la!=lb){
		my_printf("error");}
	else{
	     for(i=0;i<la;i++){
	     if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'||b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			my_printf("error");
			break;
	}
	
	else{
    if(a[i]==b[i]){
		s=s+1;}
	if(i==la-1){
	e=1.0*s/la;
	if(e>n){
	my_printf("yes");}
	else{
		my_printf("no");}
	}
	}
		 }
	}
	return 0;
}