#define NUM_ITER 878785

#include <header.h>

int main_bench(){
	int i,num=0,l1,l2,a=0;
	double p;
	char fir[501],sec[501];
	my_scanf("%lf",&p);
	my_scanf("%s%s",fir,sec);
	l1=strlen(fir);
	l2=strlen(sec);
	if(l1!=l2){
		my_printf("error\n");
		a=1;
	}
	for(i=0;i<l1;i++){
		if((fir[i]!=65&&fir[i]!=67&&fir[i]!=71&&fir[i]!=84)||(sec[i]!=65&&sec[i]!=67&&sec[i]!=71&&sec[i]!=84)){
			if(a==0){
			    my_printf("error\n");
			    a=1;
			}
			break;
		}
		if(fir[i]==sec[i]){
			num+=1;
		}
	}
	if(num*1.0/l1>=p&&a==0){
		my_printf("yes\n");
	}else if(num*1.0/l1<p&&a==0){
		my_printf("no\n");
	}
	return 0;
}

