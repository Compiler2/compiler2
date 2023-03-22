#define NUM_ITER 985708

#include <header.h>

int main_bench(){
	int i,k=0,len,panduan=0;
	double r,n;
	char a[501],b[501];
	my_scanf("%lf%s%s",&n,&a,&b);
	len=strlen(a);
	if(len!=strlen(b)){
		panduan=1;
	}
	else{
	for(i=0;i<len;i++){
		if((a[i]!='T'&&a[i]!='A'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')){
			panduan=1;
			break;
		}
		if(a[i]==b[i]){
			k++;
		}
	}
	r=1.0*k/len;
	}
	if(panduan==1){
		my_printf("error");
	}
	else{
		if(r>n){
		my_printf("yes");
		}
		else{
			my_printf("no");
		}
	}
	


	return 0;
}