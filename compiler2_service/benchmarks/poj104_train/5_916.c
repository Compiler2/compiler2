#define NUM_ITER 907007

#include <header.h>

int main_bench()
{
    int i,l1,l2;
	float s,w,L;
	char x[501],y[501];
	my_scanf("%f",&w);
	my_scanf("%s",&x);
	my_scanf("%s",&y);
	s=0;
	l1=strlen(x);
	l2=strlen(y);
	if(l1!=l2){
		my_printf("error");
	}
	else{
		for(i=0;i<l1;i++){
			if(x[i]!='A'&&x[i]!='T'&&x[i]!='C'&&x[i]!='G'){
				my_printf("error");
				break;
			}
			if(y[i]!='A'&&y[i]!='T'&&y[i]!='C'&&y[i]!='G'){
				my_printf("error");
				break;
			}
			else{
				if(x[i]==y[i]){
					s++;
				}
			}
		}
		L=l1;
		if(i==l1){
			if(s/L>w){
				my_printf("yes");
			}
			else{
				my_printf("no");
			}
		}
	}
	return 0;
}

