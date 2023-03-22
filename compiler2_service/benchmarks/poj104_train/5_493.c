#define NUM_ITER 813688

#include <header.h>

int main_bench(){
	double k,x;
	int l,m,i,a=0,t=0;
	char st1[501],st2[501];
	my_scanf("%lf",&k);
	my_scanf("\n");
	gets(st1);
	gets(st2);
	l=strlen(st1);
	m=strlen(st2);
	if(l!=m){
		t=1;
	}else{
	for(i=0;i<l-1;i++){
		if((st1[i]!='A'&&st1[i]!='T'&&st1[i]!='C'&&st1[i]!='G')||(st2[i]!='A'&&st2[i]!='T'&&st2[i]!='C'&&st2[i]!='G')){
			t=1;
			break;
			}else if(st1[i]==st2[i]){
			a++;
		}
	}
	}
	x=1.0*a/(l-1);
	if(t==1){
		my_printf("error");
		}else if(x<=k){
		my_printf("no");
	}else{
	my_printf("yes");
	}
	return 0;
}