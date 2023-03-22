#define NUM_ITER 902756

#include <header.h>

int main_bench(){
	int i,j,count=0;
	double bl;
	char a[508],b[508];
	my_scanf("%lf",&bl);
	my_scanf("%s%s",a,b);
	if(strlen(a)!=strlen(b)){
		my_printf("error");return 0;
	}
	for(i=0;a[i]!=0;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
			my_printf("error");return 0;
		}
	}
	for(i=0;b[i]!=0;i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			my_printf("error");return 0;
		}
	}
	for(i=0;a[i];i++){
		if(a[i]==b[i]){
			count++;
		}
	}
	if((1.0*count/(strlen(a)))>bl){
		my_printf("yes");
	}else{
		my_printf("no");
	}


	
	return 0;
}