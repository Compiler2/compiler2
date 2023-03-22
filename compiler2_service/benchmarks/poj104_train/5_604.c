#define NUM_ITER 924920

#include <header.h>

int main_bench(){
	int i,x,y;
	double w,sum=0,p;
	char a[1000],b[1000];
	my_scanf("%lf",&w);
	my_scanf("%s",a);
	my_scanf("%s",b);
x=strlen(a);
y=strlen(b);
	if(x==y){
		for(i=0;i<x;i++){
			if(a[i]==b[i]){
				sum++;
			} 
			else if((a[i]!='A'&&a[i]!='C'&&a[i]!='T'&&a[i]!='G')||(b[i]!='A'&&b[i]!='C'&&b[i]!='T'&&b[i]!='G')){
			my_printf("error\n");
			return 0;
		}
		}
		
	}
	else if(x!=y){
		my_printf("error\n");
		return 0;
	}
	while (x==y){
		p=sum/x;
		if(p>=w){
			my_printf("yes\n");
			break;
		}
		else my_printf("no\n");
		break;
	}
	
	return 0;
}

